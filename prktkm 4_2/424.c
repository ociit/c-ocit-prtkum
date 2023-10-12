#include <stdio.h>

void main ()
{
    int c;
    int jumchar = 0;
    int jumspace = 0;

    printf ("masukkan kalimat :");

    while ((c = getchar()) !='\n'){

        if ((c>='a'&&c<='z')||(c>='A'&&c<='Z')||(c>='0'&&c<='9')) {
            jumchar++;
        }
        if (c == ' ') {
            jumspace++;
        }
    }

    printf ("jumlah char = %d\n", jumchar);
    printf ("jumlah space = %d", jumspace);
}