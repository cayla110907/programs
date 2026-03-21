#include <stdio.h>

int main() {
    int var1 = 1, var2 = 1;
    int n = 8;
    int after;

    printf("%d %d ", var1, var2);

    for(int i = 3; i <= n; i++) {
        after = var1 + var2;
        printf("%d ", after);
        var1 = var2;
        var2 = after;
    }

    return 0;
}