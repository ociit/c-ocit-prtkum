#include <stdio.h>
#include <stdlib.h>

int main()
{
    int var_bulat = 32767;
    float var_pecahan1 = 339.2345678f;
    float var_pecahan2 = 3.4567e+40;
    char var_karakter = 'S';


    printf ("bil. bulat = %d\n", var_bulat);
    printf ("bil. pecah 1 = %f\n", var_pecahan1);
    printf ("bil. pecah 2 = %f\n", var_pecahan2);
    printf ("Huruf = %c\n", var_karakter);
    return 0;
}
