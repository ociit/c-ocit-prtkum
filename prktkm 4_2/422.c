#include <stdio.h>

void main ()
{
    int i, a, bfr, p;
    i = 1;
    char c;
        printf ("masukkan bilangan ke-%d : ", i);
        scanf ("%d", &a);

    while (c != 't') {
        printf ("mau memasukkan data lagi ? [y/t] ");
        scanf (" %c", &c);
        if (c=='y') {
            i++;
            printf ("massukkan bilangan ke-%d : ", i);
            scanf ("%d", &p);
            p = p + bfr;
            } else if (c!='y' && c!='t') {
                return;
            }
            bfr = p;
        }
        a = a + p;
        printf ("total = %d", a);
}