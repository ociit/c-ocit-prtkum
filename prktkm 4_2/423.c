#include <stdio.h>  

void main ()
{
    float a, rata, q; 
    int max, min;
    int i = 1;
    char c = 'y';

    while (c == 'y') {
        printf ("masukkan bilangan ke-%d : ", i);
        scanf ("%f", &a);
            i++;
            
        printf ("mau memasukkan data lagi ? [y/t] ");
        scanf (" %c", &c);

            if (a>max) {
                max = a;
            }
            if (a<min) {
                min = a;
            }
            q = q+a;
    }

        rata = q / i;
        printf ("total = %.2f\n", q);
        printf ("rata-rata = %.2f\n", rata);
        printf ("maximun = %d\n", max);
        printf ("minimum = %d", min);
}