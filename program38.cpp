#include <stdio.h>

int main() {
    int angka[100], n, temp;

    printf("Masukkan jumlah angka yang akan diurutkan: ");
    scanf("%d", &n);

    for(int i = 0; i < n; i++){
        printf("Masukkan angka ke-%d: ", i + 1);
        scanf("%d", &angka[i]);
    }

    for (int i = 0; i < n; i++){
        printf("%d ", angka[i]);
    }

    for (int i = 0; i < n - 1; i++){
        for (int j = i + 1; j < n; j++){
            if (angka[i] > angka[j]){
                temp = angka[i];
                angka[i] = angka[j];
                angka[j] = temp;
            }
        }
    }
    printf("Maka, hasil urutan angka dari yang terkecil hingga yang terbesar: ");
    for(int i = 0; i < n; i++){
        printf("%d ", angka[i]);
    }

    printf("\n");
    return 0;
}