#include <stdio.h>
#include <string.h>

int main() {
    char word[100];
    int panjang, palindrome = 1;

    printf("Masukkan sebuah kata: ");
    scanf("%s", word);

    panjang = strlen(word);

    for (int i = 0; i < panjang / 2; i++) {
        if (word[i] != word[panjang - i - 1]){
            palindrome = 0;
            break;
        }
    }

    if (palindrome == 1) {
        printf("%s merupakan palindrome.", word);
    } else {
        printf("%s bukan merupakan palindrome.", word);
    }

    return 0;
}