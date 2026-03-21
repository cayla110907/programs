#include <stdio.h>

int main() {
    int pin;
    int konfir, submit, input;
    
    while (1) { // 1 untuk TRUE
        printf("Masukkan PIN sebanyak 4 digit: ");
        scanf("%d", &pin);

        if (pin < 1000 || pin > 9999) {
            printf("Maaf, pin digit harus sebanyak 4 digit.\n");
            continue;
        }

        printf("Yakin untuk menyimpan PIN? (1 = simpan, 0 = belum): ");
        scanf("%d", &konfir);

        if (konfir == 1) {
            printf("\nPIN telah tersimpan!\n");
            break;
        } else if (konfir == 0) {
            printf("Maaf. silahkan coba lagi.\n\n");
        } else {
            printf("Pilihan tidak valid!\n\n");
        }
    }

    submit = 3;
    while (submit > 0) {
        printf("Masukkan PIN: ");
        scanf("%d", &input);

        if (input == pin) {
            printf("PIN benar, Anda telah terhubung dengan akun.\n");
            return 0;
        } else {
            submit--;
            if (submit > 0)
                printf("PIN salah. Anda memiliki sisa kesempatan: %d\n", submit);
        }
    }

    printf("Maaf, kartu Anda terblokir.");
    return 0;
}