#include <stdio.h>

int main() {
    int i, j;
    int baris = 4;
    int kolom = 5;
    int angka = 1;

    for (i = 1; i <= baris; i++) {
        if (i % 2 != 0) {
            for (j = 1; j <= kolom; j++) {
                printf("%-3d", angka++);
            }
        } else {
            int awal = angka + kolom - 1;
            for (j = 0; j < kolom; j++) {
                printf("%-3d", awal - j);
            }
            angka += kolom;
        }
        printf("\n");
    }
    return 0;
}