#include <stdio.h>

int main() {
    int n = 5;
    int i, j;

    for(i = 1; i <= n; i++) {
        for(j = n; j >= i; j--) {
            printf("*");
        }

        printf("%d", i * i + 1);
        printf("\n");
    }

    return 0;
}