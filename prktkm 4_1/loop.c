#include <stdio.h>
#include <stdlib.h>

void num1 () //loop 1-20
{
    for (int i=1; i<=20; i++) {
        printf ("%d\n\n", i);
    }
}

void num2 () //tringular pertambahan 2 bil sebelumnya
{
    int a, b, next;
    b=0;

    printf ("masukkan angka : ");
    scanf ("%d", &a);

    for (int i=0 ;i < a ; i++) {
        next = i + 1;
        b = b + next;
    }
    printf ("hasil = %d", b);
    
}

void num3 () //tampil A-Z
{
    for (char i='a'; i<='z'; i++) {
        printf ("%c\n", i);
    }
}

void num4 () // tampil Z-A
{
for (char i='z'; i>='a'; i--) {
    printf ("%c\n", i);
    }
}

void num5 ()//bilangan ganjil ke-n
{
    int bilgan,a;

    printf ("masukkan bilangan ke-n ganjil : ");
    scanf ("%d", &bilgan);

    for (int i=1; i<=bilgan; i++) {
    a = (i*2)-1;

    if (i==bilgan) {
        printf ("%d.", a);
    } else 
    printf ("%d,", a);    

    }
}

void num6 ()
{
    int n, a;

    printf ("masukkan urutan ke-n : ");
    scanf ("%d", &n);

    for (int i=1; i<=n; i++) {
        a=i;
        if (i%2==0) {
            a = i*-1;
        }
        if (i==n) {
            printf ("%d.",a);
        } else printf ("%d, ", a);
    }
}

void num7 ()
{
    int n, b, next;
    b=1;
    printf ("faktorial ke-n : ");
    scanf ("%d", &n);

    for (int i=1; i<n; i++) {
        next = i+1;
        b = b*next;
    }
    printf ("%d", b);
}

void main () {
    num1 ();
    num2 ();
    num3 ();
    num4 ();
    num5 ();
    num6 ();
    num7 ();
}