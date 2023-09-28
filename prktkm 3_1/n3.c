#include <stdio.h>
#include <stdlib.h>

int main ()
{
    int nominal, potongan;

    printf ("masukkan nominal pembelian : \nRp. ");
    scanf ("%d", &nominal);

    if (nominal >= 100000)
    {
        potongan = nominal * 5 / 100;
        printf ("anda menerima potongan harga sebesar : Rp. %d", potongan);
    } else {
        printf ("anda tidak menerima potongan harga");
    }

    return 0;
}