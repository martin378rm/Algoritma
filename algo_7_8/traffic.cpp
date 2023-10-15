
#include <iostream>
#include <thread>
#include <mutex>

class TrafficLight {
public:
    enum class Phase { Green, Yellow, Red };

    TrafficLight() : phase(Phase::Red) {}

    void SetPhase(Phase newPhase) {
        // Set phase and update actual traffic lights
        phase = newPhase;
        // Code to control the actual traffic lights
    }

    void Run() {
        while (true) {
            std::this_thread::sleep_for(std::chrono::seconds(5));  // Simulated duration for each phase
            std::lock_guard<std::mutex> lock(mutex);  // Lock to coordinate with other traffic lights
            switch (phase) {
                case Phase::Green:
                    SetPhase(Phase::Yellow);
                    break;
                case Phase::Yellow:
                    SetPhase(Phase::Red);
                    break;
                case Phase::Red:
                    SetPhase(Phase::Green);
                    break;
            }
        }
    }

private:
    Phase phase;
    std::mutex mutex;
};

int main() {
    TrafficLight junction1;
    TrafficLight junction2;
    TrafficLight junction3;
    TrafficLight junction4;

    std::thread thread1(&TrafficLight::Run, &junction1);
    std::thread thread2(&TrafficLight::Run, &junction2);
    std::thread thread3(&TrafficLight::Run, &junction3);
    std::thread thread4(&TrafficLight::Run, &junction4);

    thread1.join();
    thread2.join();
    thread3.join();
    thread4.join();

    return 0;
}
