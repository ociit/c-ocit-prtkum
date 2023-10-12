#include <stdio.h>

void menu();

int main() 
{
    char piluser;

    do {
        menu();
        printf ("apakah masih mau pesan lagi ? [y/t]");
        scanf (" %c", &piluser);
        } while (piluser=='y'||piluser=='Y');

    return 0;
}


void menu() { 
    printf ("\nPILIHAN MENU\n");
    printf ("1. Nasgor      : Rp. 10.000\n");
    printf ("2. Naskun      : Rp. 9.000\n");
    printf ("3. Sosis bakar : Rp. 6.000\n");
    printf ("4. Martabak    : Rp. 12.000\n");
}