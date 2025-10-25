#include <stdio.h>

int main() {
    int i, j, k, w;

    for (i = 1; i <= 5; i++) {

        for (w = 0; w < 5 - i; w++) {
            printf("  ");
        }

        for (j = 1; j <= i; j++) {
            printf("%d ", j);
        }

        for (k = i - 1; k >= 1; k--) {
            printf("%d ", k);
        }

        printf("\n");
    }

    for (i = 5 - 1; i >= 1; i--) {
        for (w = 0; w < 5 - i; w++) {
            printf("  ");
        }

        for (j = 1; j <= i; j++) {
            printf("%d ", j);
        }

        for (k = i - 1; k >= 1; k--) {
            printf("%d ", k);
        }

        printf("\n");
    }

    return 0;
}