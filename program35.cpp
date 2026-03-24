#include <stdio.h>
#include <string.h>

int main() {
    char katakalimat[200], hasil[200];
    int j = 0;

    printf("Masukkan sebuah kata atau kalimat: ");
    fgets(katakalimat, sizeof(katakalimat), stdin);

    for (int i = 0; katakalimat[i] != '\0'; i++){
        if (katakalimat[i] != 'a' && katakalimat[i] != 'A' &&
            katakalimat[i] != 'i' && katakalimat[i] != 'I' &&
            katakalimat[i] != 'u' && katakalimat[i] != 'U' && 
            katakalimat[i] != 'e' && katakalimat[i] != 'E' && 
            katakalimat[i] != 'o' && katakalimat[i] != 'O'){
                hasil[j] = katakalimat[i];
                j++;
            }
    }
    hasil[j] = '\0';
    printf("Hasil kata atau kalimat setelah huruf vokal berhasil dihapus, yaitu '%s'", hasil);
    return 0;
}