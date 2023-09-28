#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main ()
{
    float a, b, c, D, x1, x2;

    printf ("input \na : ");
    scanf ("%f", &a);

    printf ("b : ");
    scanf ("%f", &b);

    printf ("c : ");
    scanf ("%f", &c);

    D = b*b - 4*a*c;

    printf ("Nilai Deskriminan = %.2f\n", D);

    if (D == 0) {
        x1 = -b / 2*a;
        printf ("akar-akar nya adalah x1 = x2 = %.2f", x1);
    } else if (D > 0) {
        x1 = (-b + sqrt(D)) / 2*a;
        x2 = (-b - sqrt(D)) / 2*a;
        printf ("akar-akar nya adalah\n x1 = %.2f \n x2 = %.2f", x1, x2);
    } else {
        x1 = -b / 2*a + (sqrt(-D) / 2*a);
        x2 = -b / 2*a - (sqrt(-D) / 2*a);
        printf ("akar-akar imajiner nya adalah\n x1 = %.2fi \n x2 = %.2fi", x1, x2);
    }
    return 0;
}