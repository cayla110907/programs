#include <stdio.h>

int main() {
    int x, y;

    printf("Masukkan banyak dan selisih deret: ");
    scanf("%d", &x);
    printf("Masukkan angka awal: ");
    scanf("%d", &y);

    printf("Berikut hasil deret numerik meningkat: ");
    for (int i = 0; i < x; i++) {
        printf("%d ", y + (i * x));
    }

    printf("\n");

    return 0;
}