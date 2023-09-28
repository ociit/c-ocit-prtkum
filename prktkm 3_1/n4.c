#include <stdio.h>
#include <stdlib.h>

int main ()
{
    int angka, prima;
    prima = 1;

    printf ("masukkan angka asli : ");
    scanf ("%d", &angka);
    
    if (angka == 0 || angka == 1) {
        prima = 0;
    } else {
        for (int i = 2; i <= angka /2; i++) 
        {
            if (angka % i == 0){
                prima = 0;
                break;
            }
        }
    } 
    
    if (prima == 1) {
        printf ("%d adalah bilangan prima.", angka);
    } else {
        printf ("%d bukan bilangan prima.", angka);
    }

    return 0;
}