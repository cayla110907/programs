#include <stdio.h>
#include <string.h>

int main() {
    char word[100];
    int vocal = 0;

    printf("Masukkan sebuah kata: ");
    scanf("%s", word);

    for (int i = 0; i < strlen(word); i++){
        if (word[i] == 'a' || word[i] == 'i' || word[i] == 'u' ||
        word[i] == 'e' || word[i] == 'o') {
            vocal++;
        } 
    }

    printf("Maka, jumlah huruf vokal yang terdapat pada %s yaitu %d\n", word, vocal);
    return 0;
}