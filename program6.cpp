#include <stdio.h>

int main() {
    int umur, nilai;
    char praktik;

    printf("Masukkan umur Anda: ");
    scanf("%d", &umur);
    printf("Masukkan nilai ujian teori Anda: ");
    scanf("%d", &nilai);
    printf("Apakah Anda lulus ujian praktik? (Y = Lulus, N = Tidak)\n");
    scanf(" %c", &praktik);

    if (umur >= 16 && nilai >= 75 && (praktik == 'Y' || praktik == 'y')) {
        printf("Selamat! Anda telah memenuhi persyaratan pembuatan SIM.\n");
    }

    else {
        printf("Maaf, Anda belum memenuhi persyaratan pembuatan SIM karena:.\n");
        if (umur < 16) {
            printf("- Umur Anda belum cukup. (Minimal 16 tahun)\n");
        }
        if (nilai < 75) {
            printf("- Nilai ujian teori belum terpenuhi. (Minimal 75)\n");
        }
        if (praktik == 'N' || praktik == 'n') {
            printf("- Belum lulus ujian praktik.");
        }
    }

    return 0;
}