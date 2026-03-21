#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {
    int score = 0;
    int salah = 0;
    const int maxsalah = 3;
    int jumlahsoal = 9;
    char ops[] = {'+', '-', '*', '/'};

    srand(time(0));

    printf("--- GAME MENGHITUNG SOAL ARITMATIKA ---\n\n");

    int i = 1;
    while (i <= jumlahsoal && salah < maxsalah) {
        int maxoperand, point;
        if (i <= 3) {maxoperand = 10; point = 5;}
        else if (i <= 6) {maxoperand = 30; point = 10;}
        else {maxoperand = 60; point = 15;}

        int operand_satu = rand() % maxoperand + 1;
        int operand_dua = rand() % maxoperand + 1;
        char op = ops[rand() % 4];

        if (op == '/') {
            operand_dua = rand() % maxoperand + 1;
            operand_satu = operand_dua * (rand() % (maxoperand / operand_dua + 1));
        }

        int rightanswer;
        switch (op) {
            case '+': rightanswer = operand_satu + operand_dua; break;
            case '-': rightanswer = operand_satu - operand_dua; break;
            case '*': rightanswer = operand_satu * operand_dua; break;
            case '/': rightanswer = operand_satu / operand_dua; break;
        }

        int user;
        printf("Soal %d: %d %c %d = ", i, operand_satu, op, operand_dua);
        if (scanf("%d", &user) != 1) {
            printf("Jawaban salah karena tidak valid.\n\n");
            salah++;
            while (getchar() != '\n');
            continue;
        }

        if (user == rightanswer) {
            printf("Jawaban kamu benar! +%d poin\n", point);
            score += point;
        } else {
            printf("Yah, jawaban kamu salah nih! Berikut jawaban yang benar: %d\n", rightanswer);
            salah++;
        }

        printf("Kamu memiliki skor sementara yaitu %d -- Salah: %d/%d\n\n", score, salah, maxsalah);
        i++;
    }

    printf("--- GAME OVER ---\n");
    printf("Skor akhir Anda: %d\n", score);
    if (salah >= maxsalah) {
        printf("Permainan dihentikan, kamu kalah! Kamu salah menjawab soal sebanyak %d kali\n", salah);
    } else {
        printf("Hore, kamu telah menyelesaikan semua soal!\n");
    }

    return 0;
}