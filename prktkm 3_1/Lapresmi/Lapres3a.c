#include <stdio.h>
#include <stdlib.h>

int main ()
{
    int num;

    printf ("masukkan nilai : ");
    scanf ("%d", &num);

    if (num > 0) {
        printf ("Category A");
    }

    return 0;
}