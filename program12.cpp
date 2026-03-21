#include <stdio.h>

int main() {
    int sisi;
    printf("Masukkan panjang sisi: ");
    scanf("%d", &sisi);

    int luas = 6 * sisi * sisi;
    int volume = sisi * sisi * sisi;

    printf("Luas dari kubus yaitu %d\n", luas);
    printf("Volume dari kubus yaitu %d\n", volume);

    return 0;
}