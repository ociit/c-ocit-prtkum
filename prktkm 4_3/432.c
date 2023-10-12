#include <stdio.h>

void main ()
{
    int i, angka;
    printf ("masukkan angka : ");
    scanf("%d", &angka);

    for (i=1; i<angka; i+=2){
        if (i>angka){
            break;
        } else if (i%3==0) {
                continue;
            }
        printf ("%d ", i);
    
    }
}
