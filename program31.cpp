#include <stdio.h>
#include <string.h>

int main() {
    char word[100];

    printf("Masukkan sebuah kata: ");
    scanf("%s", word);

    for (int i = 0; i < strlen(word); i++) {
        if (word[i] >= 'a' && word[i] <= 'z') {
            word[i] = word[i] - 32;
        }
    }
    printf("Hasil kata setelah dikonversi ke huruf besar: %s", word);
    return 0;
}