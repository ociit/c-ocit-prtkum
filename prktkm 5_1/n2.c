#include <stdio.h>

void triangular();

void main() {
    int n;
    printf("Input n : ");
    scanf("%d", &n);
    
    triangular(n);

}


void triangular(int n) {
    int hasil = 0;
    for (int i = 1; i <= n; i++) {
        hasil = hasil + i;
    }
    printf("triangular = %d", hasil);
}