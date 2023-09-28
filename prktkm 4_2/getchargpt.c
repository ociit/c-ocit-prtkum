#include <stdio.h>

int main() {
    char karakter;
    int jumlah_huruf = 0;
    int jumlah_spasi = 0;

    printf("Masukkan sebuah kalimat: ");

    // Membaca karakter-karakter dari input sampai karakter newline ('\n')
    while ((karakter = getchar()) != '\n') {
        if (karakter >= 'a' && karakter <= 'z' || karakter >= 'A' && karakter <= 'Z' || karakter >='0' && karakter<='9') {
            // Karakter adalah huruf jika dalam rentang A-Z atau a-z
            jumlah_huruf++;
        } else if (karakter == ' ') {
            // Karakter adalah spasi jika itu adalah karakter spasi
            jumlah_spasi++;
        }
    }

    printf("Jumlah huruf: %d\n", jumlah_huruf);
    printf("Jumlah spasi: %d\n", jumlah_spasi);

    return 0;
}
