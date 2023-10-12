#include <stdio.h>

void main ()
{
    char c;

    printf ("masukkan kalimat : ");

    while (c=getchar()){

        if (c=='\n'){
            break;
        }
        
        printf("%c", c);
    }
}