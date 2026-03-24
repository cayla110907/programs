#include <stdio.h>
#include <string.h>

int main() {
    char word[100];

    printf("Masukkan sebuah kata: ");
    scanf("%s", word);

    printf("Hasil kata setelah dibalik yaitu ");

    for (int i = strlen(word) - 1; i >= 0; i--){
        printf("%c", word[i]);
    }

    printf("\n");
    return 0;
}