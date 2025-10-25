#include <stdio.h>
#include <stdlib.h>

int main() {
    int i, j, current_num,k,w;

    for (i = 1; i <= 9; i++) {

        int cv = 1 + abs(i - 5);
  
        for (w = 0; w < abs(i - 5); w++) {
            printf("  "); 
        }

        for (j = 5; j >= cv; j--) {
            printf("%d ", j);
        }


        for (k = cv + 1; k <= 5; k++) {
            printf("%d ", k);
        }

        printf("\n");
    }

    return 0;
}
