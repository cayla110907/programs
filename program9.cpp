#include <stdio.h>

int main() {
    int input_bil[10];
    int i;

    for (i = 0; i < 10; i++) {
        printf("Masukkan bilangan ke-%d: ", i + 1);
        scanf("%d", &input_bil[i]);
    }

    printf("--- Bilangan Ganjil ---\n");
    for (i = 0; i < 10; i++) {
        if (input_bil[i] % 2 != 0) {
            printf("%d ", input_bil[i]);
        }
    }

    printf("\n--- Bilangan Genap ---\n");
    for (i = 0; i < 10; i++) {
        if (input_bil[i] % 2 == 0) {
            printf("%d ", input_bil[i]);
        }
    }
    printf("\n");
    return 0;
}