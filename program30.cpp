#include <stdio.h>
#include <string.h>

int main() {
    char word[100], huruf;
    int total = 0;

    printf("Masukkan sebuah kata: ");
    scanf("%s", word);
    printf("Masukkan satu huruf yang akan dicari: ");
    scanf(" %c", &huruf);

    for (int i = 0; i < strlen(word); i++) {
        if(word[i] == huruf){
            total++;
        }
    }
    printf("Maka, huruf %c muncul sebanyak %d kali pada kata %s\n", huruf, total, word);
    return 0;
}