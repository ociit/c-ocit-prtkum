#include <stdio.h>
#include <stdlib.h>

int main()
{
    float dollar, rupiah;
    printf ("dollar : ");
    scanf ("%f", &dollar);

    rupiah = dollar*11090;
    printf ("hasil konversi = %.3f", rupiah);

    return 0;
}
