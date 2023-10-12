#include <stdio.h>

void main ()
{
    int nilai, min, max=0, data, total=0;
    printf ("jumlah data = ");
    scanf ("%d", &data);

        for (int i=1; i<=data; i++){
            printf ("Nilai ke-%d : ", i);
            scanf ("%d", &nilai);

            if (nilai>max){
                max = nilai;
            }
            if (nilai<min){
                min = nilai;
            }
            total = nilai + total;
        }
        
    printf ("\nnilai max : %d\n", max);
    printf ("nilai min : %d\n", min);
    printf ("rata-rata nilai : %d", total/data);

}