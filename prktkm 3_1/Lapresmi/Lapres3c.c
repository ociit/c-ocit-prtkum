#include <stdio.h>
#include <stdlib.h>

int main ()
{
    int num;

    printf ("masukkan nilai : ");
    scanf ("%d", &num);

    printf ("Category A\n");

    if (num <= 0) {
        printf ("Category B");
    }

    return 0;
}