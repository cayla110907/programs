#include <stdio.h>

int main() {
    float diameter, jari_jari, luas, keliling;
    printf("Masukkan diameter lingkaran: ");
    scanf("%f", &diameter);

    jari_jari = diameter / 2;
    luas = 3.14 * jari_jari * jari_jari;
    keliling = 3.14 * diameter;

    printf("Luas dari lingkaran yaitu %.2f\n", luas);
    printf("Keliling dari lingkaran yaitu %.2f\n", keliling);

    return 0;
}