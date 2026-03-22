#include <stdio.h>
#include <stdlib.h>

int main() {
    int array[5];
    int i;

    printf("Masukkan 5 bilangan integer:\n");
    for (i = 0; i < 5; i++) {
        printf("Bilangan ke-%d: ", i+1);
        scanf("%d", &array[i]);
    }

    printf("\nBilangan yang dimasukkan:\n");
    for (i = 0; i < 5; i++){
        printf("%d", array[i]);
    }
    printf("\n");

    int maxvalue = array[0];
    for(i = 0; i < 5; i++){
        if (array[i] > maxvalue) {
            maxvalue = array[i];
        }
    }printf("Nilai maksimal: %d\n", maxvalue);

    FILE *fp = fopen("maxvalue.txt", "r");
    int valuefile = 0;

    if (fp != NULL) {
        fscanf(fp, "%d", &valuefile);
        fclose(fp);
    } else {
        valuefile = 0;
    }

    if (maxvalue > valuefile) {
        fp = fopen("MaxValue.txt", "w");
        fprintf(fp, "Nilai maksimal terbaru: %d", maxvalue);
        fclose(fp);
        printf("Nilai maksimum baru lebih besar dari isi file! File diperbarui menjadi %d.\n", maxvalue);
    } else {
        printf("Nilai maksimum tidak lebih besar dari isi file. Tidak ada yang diperbarui.\n");
    }

    return 0;
}