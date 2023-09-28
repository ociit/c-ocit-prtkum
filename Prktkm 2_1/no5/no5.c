#include <stdio.h>
#include <stdlib.h>

int main()
{
    int a, b, c, hasil;
    printf ("masukkan nilai A : ");
    scanf ("%d", &a);
    printf ("masukkan nilai B : ");
    scanf ("%d", &b);
    printf ("masukkan nilai C : ");
    scanf ("%d", &c);

    hasil = b*b - 4*a*c;

    printf ("hasil Deskriminan = %d", hasil);
    return 0;
}
