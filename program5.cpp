#include <stdio.h>

int main() {
    int tahun;

    printf("Masukkan tahun: ");
    scanf("%d", &tahun);

    if (tahun % 4 == 0) {
        printf("Tahun %d merupakan tahun kabisat.\n", tahun);
    }
    else {
        printf("Tahun %d bukan merupakan tahun kabisat.", tahun);
    }

    return 0;
}