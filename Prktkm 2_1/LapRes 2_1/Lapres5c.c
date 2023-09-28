#include <stdio.h>
#include <stdlib.h>

int main ()
{
    int y, x, z, a, b, c;

    /*permisalan nilai x, z, a, b, c*/
    x = 4;
    a = 2;
    b = 2;
    c = 5;
    z = 3;

    y = b*x*x + 0.5*x - c;
    y = 0.3*x*z / 2*a;

    printf ("hasil y = %d", y);

    return 0;
}