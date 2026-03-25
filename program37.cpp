#include <stdio.h>
#include <string.h>

int main() {
    char word[100];
    char temp;

    printf("Masukkan sebuah kata: ");
    scanf("%s", word);

    for(int i = 0; i < strlen(word) - 1; i++){
        for (int j = i + 1; j < strlen(word); j++){
            if(word[i] > word[j]) {
                temp = word[i];
                word[i] = word[j];
                word[j] = temp;
            }
        }
    }
    printf("Maka, hasil urutan huruf dari yang terkecil ke yang terbesar yaitu %s", word);
    return 0;
}