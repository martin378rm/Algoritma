
#include <iostream>

int main() {
    double bahanBakar = 10.0;  // Bahan bakar awal pada kilometer pertama
    double persenIterasi = 0.8;       // Rasio pengurangan bahan bakar per kilometer

    // Menghitung total bahan bakar yang dihabiskan hingga mencapai 100 km
    for (int kilometer = 2; kilometer <= 100; kilometer++) {
        bahanBakar *= persenIterasi;
        std::cout << bahanBakar << std::endl;
    }

    std::cout << "Total bahan bakar yang dihabiskan setelah mencapai 100 km: " << bahanBakar << " kg" << std::endl;

    return 0;
}
