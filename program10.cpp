#include <stdio.h>

int main() {
    float temp[7];
    float total = 0;
    float ratarata;
    float suhu_max, suhu_min;
    int i;

    for (i = 0; i < 7; i++) {
        printf("Masukkan suhu temperatur hari ke-%d: ", i + 1);
        scanf("%f", &temp[i]);
        total += temp[i];
    }

    ratarata = total / 7;
    suhu_max = temp [0];
    suhu_min = temp [0];
    for (i = 1; i < 7; i++) {
        if (temp [i] > suhu_max) {
            suhu_max = temp[i];
        }
        if (temp[i] < suhu_min) {
            suhu_min = temp[i];
        }
    }

    printf("\n--- Hasil Observasi Suhu selama 7 Hari ---\n");
    printf("Jumlah suhu rata-rata selama 1 minggu: %.2f Celcius\n", ratarata);
    printf("Suhu paling dingin selama 1 minggu: %.2f Celcius\n", suhu_min);
    printf("Suhu paling panas selama 1 minggu: %.2f Celcius\n", suhu_max);

    return 0;
}