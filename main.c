#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main() {
    char *string = NULL; // Pointer ke string yang belum diinisialisasi
    int initialSize = 10; // Ukuran awal string



    // Mengalokasikan memori untuk string
    string = (char *)malloc(initialSize * sizeof(char));
    if (string == NULL) {
        perror("Pengalokasian memori gagal");
        exit(EXIT_FAILURE);
    }
    
    // Inisialisasi string
    strcpy(string, "Hei, ");

    // Menambahkan teks ke string (memperbesar string jika diperlukan)
    strcat(string, "world!");

    // Mengubah ukuran string jika diperlukan
    int newSize = strlen(string) + 1;
    string = (char *)realloc(string, newSize * sizeof(char));
    if (string == NULL) {
        perror("Pengubahan ukuran memori gagal");
        exit(EXIT_FAILURE);
    }

    // Menampilkan string
    printf("String: %s\n", string);

    // Membebaskan memori yang dialokasikan
    free(string);

    return 0;
}

// sudo cp -r lightdm-webkit-theme-glo`rious /usr/share/lightdm-webkit/themes/glorius
