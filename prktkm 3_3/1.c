#include <stdio.h>
#include <stdlib.h>

int main ()
{
    char letter;

    printf ("input 1 capital char : ");
    scanf ("%c", &letter);

    switch (letter) {
            case 'X' : printf ("sum = 0");
        break;
            case 'Z' : printf ("valid_flag = 1");
        break;
            case 'A' : printf ("sum = 1");
        break;
            default : printf ("Unknown letter --> %c\n", letter);
    }
}