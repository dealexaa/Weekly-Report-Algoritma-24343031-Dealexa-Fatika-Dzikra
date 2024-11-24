#include <stdio.h>

int main() {
    int i, j;
    int n = 5; 

    // Loop mencetak pola
    for (i = 1; i <= n; i++) {
        // Loop mencetak angka
        for (j = 1; j <= i; j++) {
            printf("%d ", i * j); 
        }
        
        printf("\n");
    }

    return 0;
}
