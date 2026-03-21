#include <stdio.h>
#include <stdlib.h>

int global1, global2;

void input_number() {
    printf("Masukkan angka pertama: ");
    scanf("%d", &global1);

    if (global1 == 00) {
        printf("Program berhasil diakhiri.\n");
        exit (0);
    }

    printf("Masukkan angka kedua: ");
    scanf("%d", &global2);
}

void tambah() {
    printf("Hasil penjumlahan: %d\n", global1 + global2);  
}

void kurang() {
    printf("Hasil pengurangan: %d\n", global1 - global2);  
}

void kali() {
    printf("Hasil perkalian: %d\n", global1 * global2);
}

void bagi() {
    if (global2 == 0) {
        printf("Tidak dapat dibagi dengan nol!\n");
    } else {
        printf("Hasil pembagian: %d\n", global1 / global2);
    }
}

int main () {
    char op;

    printf("----- PROGRAM KALKULATOR -----\n");
    printf("Untuk mengakhiri program, silahkan input '00' sebagai angka pertama.\n");

    while (1) {
        input_number();

        printf("Masukkan lambang operasi (+, -, *, /): ");
        scanf(" %c", &op);

        if (op == '+') {
            tambah();
        } else if (op == '-') {
            kurang();
        } else if (op == '*') {
            kali();
        } else if (op == '/') {
            bagi();
        } else {
            printf("Lambang operasi tidak dikenali!");
        }
    }

    return 0;
}