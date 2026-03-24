#include <stdio.h>
#include <string.h>

int main() {
    char word1[100], word2[100];

    printf("Masukkan kata pertama: ");
    scanf("%s", word1);
    printf("Masukkan kata kedua: ");
    scanf("%s", word2);

    strcat(word1, word2);
    printf("Maka, gabungan kata yang dihasilkan: %s", word1);
    return 0;
}