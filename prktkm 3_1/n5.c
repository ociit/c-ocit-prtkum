#include <stdio.h>
#include <stdlib.h>

int main () 
{
    float angka1, angka2, hasil;

    printf ("masukkan angka pertama : ");
    scanf ("%d", &angka1);

    printf ("masukkan angka kedua : ");
    scanf ("%d", &angka2);

    if (angka2 == 0) {
        printf ("#DIV/0!");
    } else {
        hasil = angka1 / angka2;
        printf ("hasil bagi = %.3f", hasil);
    }

    return 0;
}