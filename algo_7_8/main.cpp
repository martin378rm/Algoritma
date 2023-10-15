#include <iostream>
using namespace std;

int main() {
    int decimalNumber;
    
    // Input bilangan desimal
    cout << "Masukkan bilangan desimal (0-255): ";
    cin >> decimalNumber;

    // Periksa apakah bilangan desimal berada dalam rentang yang valid
    if (decimalNumber < 0 || decimalNumber > 255) {
        cout << "Bilangan tidak valid. Harus antara 0 hingga 255." << endl;
    } else {
        int binaryNumber[8]; // Array untuk menyimpan representasi biner

        // Konversi bilangan desimal ke biner
        for (int i = 7; i >= 0; i--) {
            binaryNumber[i] = decimalNumber % 2;
            decimalNumber /= 2;
        }

        // Cetak representasi biner
        cout << "Representasi biner: ";
        for (int i = 0; i < 8; i++) {
            cout << binaryNumber[i];
        }
        cout << endl;
    }

    return 0;
}
