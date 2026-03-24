#include <stdio.h>
#include <string.h>

int main() {
    char word1[100], word2[100];
    int p1, p2;
    int anagram = 1;
    
    printf("Masukkan kata pertama: ");
    scanf("%s", word1);
    printf("Masukkan kata kedua: ");
    scanf("%s", word2);

    p1 = strlen(word1);
    p2 = strlen(word2);

    if (p1 != p2){
        anagram = 0;
    } else {
        for (int i = 0; i < p1; i++) {
            int total1 = 0, total2 = 0;
        
        for (int j = 0; j < p1; j++) {
            if (word1[i] == word1[j]){
                total1++;
            }
            if (word1[i] == word2[j]) {
                total2++;
            }
        }

        if (total1 != total2) {
            anagram = 0;
            break;
        }
    }
}
    if (anagram == 1) {
        printf("%s dan %s merupakan anagram\n", word1, word2);
    } else {
        printf("%s dan %s bukan merupakan anagram", word1, word2);
    }
    return 0;
}