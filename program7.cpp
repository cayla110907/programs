#include <stdio.h>

int main() {
    char character;

    printf("Masukkan karakter (M / K / H): ");
    scanf("%c", &character);

    switch (character) {
        case 'M':
            printf("Jalan.\n");
            break;
        case 'K':
            printf("Pelan-pelan.\n");
            break;
        case 'H':
            printf("Berhenti.\n");
            break;
        default:
            printf("Invalid character.\n");
    }
    
    return 0;
}