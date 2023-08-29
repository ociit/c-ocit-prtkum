#include <stdio.h>
#include <stdlib.h>

int main()
{
    int rupiah, dollar;
    printf ("dollar : ");
    scanf ("%d", &dollar);

    rupiah = dollar*11090;
    printf ("hasil konversi = %d", rupiah);

    return 0;
}
