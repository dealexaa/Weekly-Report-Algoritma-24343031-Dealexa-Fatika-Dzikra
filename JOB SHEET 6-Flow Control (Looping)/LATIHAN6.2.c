#include <stdio.h>

int main() {
    int i, j;
    
    for (i = 1; i <= 5; i++) {
        // Mencetak bintang
        for (j = 1; j <= i; j++) {
            printf("* ");
        }
       
        printf("\n");
    }

    return 0;
}
