#include <stdio.h>
#include <string.h>

int main() {
    char word1[100], word2[100];

    printf("Masukkan kata pertama: ");
    scanf("%s", word1);
    printf("Masukkan kata kedua: ");
    scanf("%s", word2);

    if (strcmp(word1, word2) == 0){
        printf("%s dan %s merupakan kata yang sama", word1, word2);
    } else {
        printf("%s dan %s merupakan kata yang berbeda", word1, word2);
    }
    return 0;
}