#include <stdio.h>
#include <stdlib.h>

int main ()
{
    int nominal, potongan;

    printf ("masukkan nominal pembelian : \nRp. ");
    scanf ("%d", &nominal);

    if (nominal >= 100000)
    {
        potongan = nominal - (nominal * 5 / 100);
        printf ("total pembelian anda sebesar : %d", potongan);
    } else {
        printf ("total pembelian anda sebesar : %d", nominal);
    }

    return 0;
}