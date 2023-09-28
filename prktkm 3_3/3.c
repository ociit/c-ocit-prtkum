#include <stdio.h>
#include <stdlib.h>
#define phi 3.14
int main ()
{
    int piluser, rkub, vkub, rling, rsil, tsil;
    float vsil, luas;
    printf ("MACAM-MACAM PROSES :\n");
    puts ("1. Menghitung Vol. Kubus");
    puts ("2. Menghitung Luas Lingkaran");
    puts ("3. Menghitung Vol. Silinder");
    
    puts ("Pilih Nomor proses yang diinginkan : ");
    scanf ("%d", &piluser);

    switch (piluser) {
            case 1 : printf ("masukkan panjang rusuk kubus : \n");
                    scanf ("%d", &rkub);
                    vkub = rkub*rkub*rkub;
                    printf ("volume kubus = %d", vkub);
        break;
            case 2 : printf ("masukkan panjang jari-jari lingkaran : \n");
                    scanf ("%d", &rling);
                    luas = phi*rling*rling;
                    printf ("luas lingkaran = %.2f", luas);
        break;
            case 3 : printf ("masukkan jari-jari : ");
                    scanf ("%d", &rsil);
                    printf ("masukkan tinggi silinder : ");
                    scanf ("%d", &tsil);
                    vsil = phi*rsil*rsil*tsil;
                    printf ("volume silinder = %.2f", vsil);
        break;
            default : printf ("Nomor tidak terdapat pada pilihan !");
    }

    return 0;
}