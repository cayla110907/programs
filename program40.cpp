#include <stdio.h>

int main() {
    int angka[100], n, search;
    int found = 0;

    printf("Masukkan jumlah angka: ");
    scanf("%d", &n);

    for (int i = 0; i < n; i++){
        printf("Masukkan angka ke-%d: ", i + 1);
        scanf("%d", &angka[i]);
    }
    printf("Masukkan angka yang dicari: ");
    scanf("%d", &search);

    for (int i = 0; i < n; i++){
        if (angka[i] == search){
            printf("Angka %d berhasil ditemukan pada posisi ke-%d\n", search, i + 1);
            found = 1;
            break;
        }
    }

    if (found == 0){
        printf("Angka %d tidak dapat ditemukan", search);
    }
    return 0;
}