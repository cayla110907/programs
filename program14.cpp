#include <stdio.h>

int main() {
    int n;
    char c1, c2, c3;

    printf("Masukkan jumlah N: ");
    scanf("%d", &n);
    printf("Masukkan batas atas dan bawah: ");
    scanf(" %c", &c1);
    printf("Masukkan batas kiri dan kanan: ");
    scanf(" %c", &c2);
    printf("Masukkan konten dari persegi: ");
    scanf(" %c", &c3);

    for (int i = 1; i <= n; i++) {
        for (int j = 1; j <= n; j++) {
            if (i == 1 || i == n) {
                printf("%c ", c1);
            }
            else if (j == 1 || j == n) {
                printf("%c ", c2);
            }
            else {
                printf("%c ", c3);
            }
        }
        printf("\n");
    }

    return 0;
}