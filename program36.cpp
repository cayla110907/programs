#include <stdio.h>
#include <string.h>

int main(){
    char word[100];
    int hitung[100] = {0};

    printf("Masukkan sebuah kata: ");
    scanf("%s", word);

    for(int i = 0; i < strlen(word); i++) {
        int total = 1;

        if (hitung[i] == 1){
            continue;
        }

        for(int j = i + 1; j < strlen(word); j++){
            if (word[i] == word[j]){
                total++;
                hitung[j] = 1;
            }
        }

        printf("%c terdapat sebanyak %d kali\n", word[i], total);
    }
    return 0;
}