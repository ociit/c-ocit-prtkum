#include <stdio.h>
#include <stdlib.h>

int main ()
{
    int angka;

    printf ("masukkan angka bulat : ");
    scanf ("%d", &angka);

    printf ("angka yang dimasukkan adalah %d\n", angka);
    
    if (angka % 2 == 0) 
    {
        printf ("%d adalah bilangan genap.", angka);
    } else {
        printf ("%d adalah bilangan ganjil.", angka);
    }

    return 0;
}