#include <stdio.h>

void n1 ()
{
    int a;

    printf ("input : ");
    scanf ("%d", &a);

    for (int i=1; i<=a; i++){
        for (int c=1; c<=a; c++){
            printf ("%d ", c);
        }
        printf("\n");
    }
}

void n2 ()
{
    int a;

    printf ("input : ");
    scanf ("%d", &a);

    for (int i=1; i<=a; i++){
        for (int c=1; c<=i; c++){
            printf ("%d ", i);
        }
        printf ("\n");
    }
}

void n3 ()
{
    int n, out, count, d;
    count=2;
    out=1;
    printf ("bilangan prima ke-n : ");
    scanf ("%d", &n);

    while (out<=n){                 //perulangan hingga ke - a
        d=0;                            //mengulang nilai d menjadi 0 lagi ketika sudah mendapatkan bilangan prima
        for (int i=1; i<=count; i++){   //looping pembagi dari counter untuk mengecek apkah count adalah prima 
            if (count%i==0){                            
                d++;                    //mencari jumlah faktor dari count dengan nilai d
            }
        }
        
            if (d==2){                      // jika hanya mempunyai 2 faktor maka ia prima
                printf ("%d ", count);
                out++;                      //menambah nilai perulangan +1 menuju a jika telah menemukan bilangan prima
            }

        count++;                        //menambah nilai count ketika sudah ataupun blm menemukan bilangan prima 
    }
}

int main (){
    n1();
    n2();
    //n3();
}