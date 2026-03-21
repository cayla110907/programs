#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {
    int answer, tebakan, kesempatan = 0;

    srand(time(0));
    answer = rand() % 10 + 1;

    printf("Game Tebak Angka (1-10)\n");

    do {
        printf("Masukkan angka tebakan Anda: ");
        scanf("%d", &tebakan);
        kesempatan++;

        if (tebakan < answer) {
            printf("Jawaban anda salah, angka terlalu kecil. Silahkan coba lagi!\n");
        } else if (tebakan > answer) {
            printf("Jawaban anda salah, angka terlalu besar. Silahkan coba lagi!\n");
        } else {
            printf("Selamat, jawaban Anda benar! Jawabannya adalah %d\n", answer);
            printf("Jumlah percobaan: %d\n", kesempatan);
        }
    } while (tebakan != answer);

    return 0;
}