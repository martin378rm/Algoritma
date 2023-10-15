
#include <iostream>

using namespace std;

int main() {
    int suku = 1;  // Inisialisasi suku pertama
    int rasio = 2; // Inisialisasi rasio (pengganda)

    cout << "10 suku pertama deret bilangan: " << endl;

    for (int i = 0; i < 10; i++) {
         cout << suku << " ";

        // Menghitung suku berikutnya
        suku *= rasio;
    }

    cout << endl;    

    return 0;
}
