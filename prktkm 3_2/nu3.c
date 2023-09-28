#include <stdio.h>
#include <stdlib.h>

int main ()
{
    int nilai;

    printf ("masukkan angka skormu : ");
    scanf ("%d", &nilai);

    if (nilai <= 40 && nilai >= 0) {

        printf ("Nilai anda adalah E");

    } else if (nilai > 40 && nilai <= 55) {

        printf ("Nilai anda adalah D");

    } else if (nilai > 55 && nilai <= 60) {

        printf ("Nilai anda adalah C");

    } else if (nilai > 60 && nilai <= 80) {

        printf ("Nilai anda adalah B");

    } else if (nilai > 80 && nilai <= 100) {

        printf ("Nilai anda adalah A");

    } else printf ("Invalid");

    return 0; 
}

