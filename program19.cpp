#include <stdio.h>
#include <windows.h>

int main() {
    int count;

    printf("Masukkan data countdown untuk ditampilkan: ");
    scanf("%d", &count);

    printf("Countdown mulai.\n");;
    while (count >= 0) {
        printf("%d\n", count);
        Sleep(100);
        count--;
    }

    printf("Waktu telah habis.\n");
    return 0;
}

