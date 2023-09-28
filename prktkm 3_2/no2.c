#include <stdio.h>

int main ()
{
    float bil1, bil2, hasil;
    int pil;

    printf ("Masukkan bil. 1 : ");
    scanf ("%f", &bil1);

    printf ("Masukkan bil. 2 : ");
    scanf ("%f", &bil2);

    puts ("\nPILIH SALAH SATU OPERATOR");
    puts ("1. Penjumlahan");
    puts ("2. Pengurangan");
    puts ("3. Perkalian");
    puts ("4. pembagian");

    puts ("Masukkan nomor pilihan :");
    scanf ("%d", &pil);

    switch (pil) {
            case 1 : hasil = bil1 + bil2; 
            printf ("\nhasil operasi %d = %.2f", pil, hasil);
        break;
            case 2 : hasil = bil1 - bil2;
            printf ("\nhasil operasi %d = %.2f", pil, hasil);
        break;
            case 3 : hasil = bil1 * bil2;
            printf ("\nhasil operasi %d = %.2f", pil, hasil);
        break;
            case 4 : hasil = bil1 / bil2;
            if (bil2 == 0) {
                printf ("\nEror");
            } else printf ("\nhasil operasi %d = %.2f", pil, hasil);
        break;
            default : printf ("tidak ada operasi");

    return 0;
    }   
}