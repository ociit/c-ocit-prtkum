#include <stdio.h>
#include <stdlib.h>

int main()
{
    int a = 12, b = 2, c = 3, d = 4, p1, p2, p3, p4, p5, p6;

    p1 = a % b;
    p2 = a - c;
    p3 = a + b;
    p4 = a / d;
    p5 = a / d * d + a % d;
    p6 = a % d / d * a - c;

    puts ("A = 12 \nB = 2 \nC = 3 \nD = 4\n");
    printf ("hasil operasi 1 = %d\n", p1);
    printf ("hasil operasi 2 = %d\n", p2);
    printf ("hasil operasi 3 = %d\n", p3);
    printf ("hasil operasi 4 = %d\n", p4);
    printf ("hasil operasi 5 = %d\n", p5);
    printf ("hasil operasi 6 = %d\n", p6);
    return 0;
}
