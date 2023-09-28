#include <stdio.h>
#include <stdlib.h>

int main()
{
  puts ("\n\t Pada dasar nya output yang dihasilkan dari kedua code tersebut sama,");
  puts ("yakni menghasilkan sebuah bilangan bulat (integer) dari suatu operasi tertentu.\n");

  puts ("\t Tetapi jika tipe data kedua code diganti dari 'int' menjadi 'float' maka akan terlihat perbedaan");
  puts ("yang mana pada soal no.3 akan terjadi perubahan output menjadi bilangan desimal atau pecahan");
  puts ("sedangkan soal no.4 hanya akan menghasilkan pecahan yang bulat (hanya ada angka 0 dibelakang koma) meskipun keduanya sama sama membagi bilangan bulat.\n");
  
  puts ("\t Hal ini dapat terjadi karena pada soal no.3 operasi pembagian yang membagi sesama bilangan bulat yang bertipe data integer,");
  puts ("sama halnya seperti opeasi pembagian pada no.4 bagian 'lembaran seratusribu' yang masih membagi dua bilangan integer.");
  puts ("Berbeda hal dengan operasi pembagian pada bagian 'lembaran limapuluh ribu' yang membagi sisa yang bertipe data 'float' dengan bilangan integer");
  puts ("yang akan menghasilkan bilangan pecahan karena tidak membagi dua bilangan yang bertipe data integer (meski nilai sisanya berbentuk bulat).");

    return 0;
}
