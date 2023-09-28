#include <stdio.h>
#include <stdlib.h>

int main()
{
    float ratusanribu, sisa1, puluhanribu50, sisa2, puluhanribu20, sisa3, puluhanribu10, sisa4, limaribu, sisa5, duaribu, sisa6, seribu;
    int bilangan;
    
    printf ("uang rupiah : ");
    scanf ("%d", &bilangan);

    ratusanribu = bilangan / 100000;
    sisa1 = bilangan - (ratusanribu*100000);

    puluhanribu50 = sisa1 / 50000;
    sisa2 = sisa1 - (puluhanribu50*50000);

    puluhanribu20 = sisa2 / 20000;
    sisa3 = sisa2 - (puluhanribu20*20000);

    puluhanribu10 = sisa3 / 10000;
    sisa4 = sisa3 - (puluhanribu10*10000);

    limaribu = sisa4 / 5000;
    sisa5 = sisa4 - (limaribu*5000);

    duaribu = sisa5 / 2000;
    sisa6 = sisa5 - (duaribu*2000);

    seribu = sisa6 / 1000;

    printf ("%f lembar 100 rb an\n", ratusanribu);
    printf ("%f lembar 50 rb an\n", puluhanribu50);
    printf ("%f lembar 20 rb an\n", puluhanribu20);
    printf ("%f lembar 10 rb an\n", puluhanribu10);
    printf ("%f lembar 5 rb an\n", limaribu);
    printf ("%f lembar 2 rb an\n", duaribu);
    printf ("%f lembar 1 rb an\n", seribu);

    return 0;
}
