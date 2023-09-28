#include <stdio.h>
#include <stdlib.h>

int main ()
{
    int angka;

    printf ("masukkkan angka : ");
    scanf ("%d", &angka);

    if (angka > 0 && angka <= 100) {
        printf ("angka termasuk dalam range");
    } else {
        printf ("angka diluar range");
    }
    return 0;
}