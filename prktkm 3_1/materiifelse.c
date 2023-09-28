#include <stdio.h>


/*
int main()
{
    int nilai = 7;

    // if (kondisi) --> kondisi harus menghasilkan nilai 0 (salah)
    // atau selain 0 (nilai 1, 2, 3 dst)
    // 5==7 --> salah/0, 5>7 --> salah/0, 6<=10 --> benar/selain 0
    // nilai > 17 --> salah/0
    if (nilai%2 == 0)
        printf("Tampil 1: Nilai adalah bilangan Genap\n");

    // 3 Baris dibawah adalah sequence biasa, shg tidak dipengaruhi oleh if
    printf("Tampil 2\n");
    printf("Tampil 3\n");
    printf("Tampil 4\n");

    return 0;
} */

/*
int main()
{
    int nilai = 13;

    // if (kondisi) --> kondisi harus menghasilkan nilai 0 (salah)
    // atau selain 0 (nilai 1, 2, 3 dst)
    // 5==7 --> salah/0, 5>7 --> salah/0, 6<=10 --> benar/selain 0
    // nilai > 17 --> salah/0
    if (nilai%2 == 0){ // dengan adanya kurung kurawal maka 4 baris dibawah
        //akan dipengaruhi oleh if()
        printf("Tampil 1: Nilai adalah bilangan Genap\n");
        printf("Tampil 2\n");
        printf("Tampil 3\n");
        printf("Tampil 4\n");
    }

    // dua baris dibawah akan selalu dikerjakan
    printf("Tampil 5\n");
    printf("Tampil 6\n");
    return 0;
} */

int main()
{
    int nilai = 7;

    // if (kondisi) --> kondisi harus menghasilkan nilai 0 (salah)
    // atau selain 0 (nilai 1, 2, 3 dst)
    // 5==7 --> salah/0, 5>7 --> salah/0, 6<=10 --> benar/selain 0
    // nilai > 17 --> salah/0
    if (nilai%2 == 0){
        // jika kondisi () benar, baris dibawahnya dieksekusi
        // jika kondisi () salah, baris dibawahnya tidak dieksekusi,
            //baris else yg dieksekusi
        printf("Tampil 1.1: Nilai adalah bilangan Genap\n");
        printf("Tampil 1.2: Nilai adalah bilangan Genap\n");
    } else {
        printf("Tampil 1.1: Nilai adalah bilangan Ganjil\n");
        printf("Tampil 1.2: Nilai adalah bilangan Ganjil\n");
    }

    // 3 Baris dibawah adalah sequence biasa, shg tidak dipengaruhi oleh if
    printf("Tampil 2\n");
    printf("Tampil 3\n");
    printf("Tampil 4\n");

    return 0;
}