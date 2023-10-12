#include <stdio.h>

float kuadrat(float x);

int main ()
{
    float n;
    printf ("masukkan angka : ");
    scanf ("%f", &n);
    float hasil = kuadrat(n);
    printf ("%.2f", hasil);
}

float kuadrat(float x){
    return x*x;
}