#include <stdio.h>
#include <stdlib.h>

int main ()
{
    int piluser;

    puts ("PILIHAN HARI");
    puts ("1. Senin");
    puts ("2. Selasa");
    puts ("3. Rabu");
    puts ("4. Kamis");
    puts ("5. Jumat");
    puts ("6. Sabtu");
    puts ("7. Minggu\n");

    puts ("Masukkan Nomor pilihanmu : ");
    scanf ("%d", &piluser);

    switch (piluser) {
            case 1 : printf ("Pilihan anda aladah Senin");
        break;
            case 2 : printf ("Pilihan anda aladah Selasa");
        break;
            case 3 : printf ("Pilihan anda aladah Rabu");
        break;
            case 4 : printf ("Pilihan anda aladah Kamis");
        break;
            case 5 : printf ("Pilihan anda aladah Jumat");
        break;
            case 6 : printf ("Pilihan anda aladah sabtu");
        break;
            case 7 : printf ("Pilihan anda aladah Minggu");
        break;
            default : printf ("Nomor yang anda masukkan tidak ada dalam list");
    }
    
    return 0;
}

// jika menggunakan if-else-if

    // if (piluser == 1) {
    //     printf ("pilihan anda adalah Senin");

    // } else if (piluser == 2) {
    //     printf ("pilihan anda adalah Selasa");

    // } else if (piluser == 3) {
    //     printf ("pilihan anda adalah Rabu");

    // } else if (piluser == 4) {
    //     printf ("pilihan anda adalah Kamis");

    // } else if (piluser == 5) {
    //     printf ("pilihan anda adalah Jumat");

    // } else if (piluser == 6) {
    //     printf ("pilihan anda adalah Sabtu");

    // } else if (piluser == 7) {
    //     printf ("pilihan anda adalah Minggu");

    // } else printf ("Nomor tidak termasuk dalam list")