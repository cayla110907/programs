#include <stdio.h>

int main(){
    int angka[100], n;
    int terbesar, terkecil;

    printf("Masukkan jumlah angka: ");
    scanf("%d", &n);

    for(int i = 0; i < n; i++){
        printf("Masukkan angka ke-%d: ", i + 1);
        scanf("%d", &angka[i]);
    }
    terbesar = angka[0];
    terkecil = angka[0];

    for (int i = 1; i < n; i++){
        if (angka[i] > terbesar){
            terbesar = angka[i];
        }
        if (angka[i] < terkecil){
            terkecil = angka[i];
        }
    }
    printf("Nilai terbesar: %d\n", terbesar);
    printf("Nilai terkecil: %d", terkecil);

    return 0;
}