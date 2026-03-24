#include <stdio.h>

int main() {
    int tugas, uts, uas;
    int NA, NR, tertinggi, terendah;
    char nama [50];
    int i;

    for (i = 0; i < 10; i++){
        printf("\nMahasiswa ke-%d \n", i+1);

        printf("Masukkan nama: ");
        scanf("%s", nama);
        printf("Masukkan nilai tugas: ");
        scanf("%d", &tugas);
        printf("Masukkan nilai UTS: ");
        scanf("%d", &uts);
        printf("Masukkan nilai UAS: ");
        scanf("%d", &uas);

        NA = (0.3 * tugas) + (0.3 * uts) + (0.4 * uas);

        if (NA <= 69 && NA >= 60){
            printf("Predikat = C");
        } if (NA <= 79 && NA >= 70){
            printf("Predikat = B");
        } if (NA >= 80){
            printf("Predikat = A");
        } else {
            printf("Predikat = D");
        }
    }
}