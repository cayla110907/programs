#include <stdio.h>
#include <string.h>

int main() {
    char kalimat[200];
    int totalkata = 0;

    printf("Masukkan sebuah kalimat: ");
    fgets(kalimat, sizeof(kalimat), stdin);

    for (int i = 0; kalimat[i] != '\0'; i++) {
        if (kalimat[1] != ' ' && (i == 0 || kalimat[i - 1] == ' ')){
            totalkata++;
        }
    }
    printf("Maka, jumlah kata pada kalimat tersebut yaitu %d kata", totalkata);
}