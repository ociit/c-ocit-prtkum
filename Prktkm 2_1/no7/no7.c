#include <stdio.h>
#include <stdlib.h>
#define phi 3.14

int main()
{
    float r, luas;
    printf ("masukkan jari-jari lingkaran : ");
    scanf ("%f", &r);

    luas = phi*r*r;
    printf ("luas lingkaran = %.2f", luas);
    
    return 0;
}
