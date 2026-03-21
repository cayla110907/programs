#include <stdio.h>

void tambah (int a, int b) {
    int result = a + b;
    printf("\nHasil penjumlahan: %d\n", result);
}

void kurang (int a, int b) {
    int result2 = a - b;
    printf("\nHasil pengurangan: %d\n", result2);    
}

int kali (int a, int b) {
    return a * b;
}

int bagi (int a, int b) {
    return a / b;
}

int main() {
    int a, b, option;
    char end = 'b';

    while (end != 'a') {
        printf("Gunakan 'a' untuk berhenti.\n");

        printf("Masukkan nilai A: ");
        if (scanf("%d", &a) != 1) return 0;

        printf("Masukkan nilai B: ");
        if (scanf("%d", &b) != 1) return 0;

        printf("\nOperasi bilangan:\n");
        printf("1. Tambah (+)\n2. Kurang (-)\n3. Kali (*)\n4. Bagi (/)\nPilih: ");
        if (scanf("%d", &option) != 1) return 0;

        if (option == 1) {
            tambah(a, b);
        } else if (option == 2) {
            kurang(a, b);
        } else {
            switch (option) {
                case 3: {
                    int hasil_kali = kali(a, b);
                    printf("\nHasil perkalian: %d\n", hasil_kali);
                    break;
                }
                case 4: {
                    if (b == 0) {
                        printf("\nError: Pembagian dengan nol tidak diperbolehkan.\n");
                    } else {
                        int hasil_bagi = bagi(a, b);
                        printf("\nHasil pembagian: %d\n", hasil_bagi);
                    }
                    break;
                }
                default:
                    printf("\nHarap masukkan angka yang sesuai!\n");
                    break;
            }
        }
        printf("\nSilahkan ketik huruf 'a' untuk berhenti atau karakter lain untuk lanjut: ");
        scanf(" %c", &end);
        printf("\n");
    }
    return 0;
}