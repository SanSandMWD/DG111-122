#include <stdio.h>

int main(void) {
    int i ;
    for (i = 1; i <= 5; i++) {
        int j;
        for (j = 1; j <= i; j++) {
            printf("*");
        }
        printf("\n");
    }

    printf("\n");

    for (i = 1; i <= 4; i++) {
        int j;
        for (j = 1; j <= 4; j++) {
            printf("*");
        }
        printf("\n");
    }

    printf("\n");
    int row ;
    int n = 4 ;
    for (int row = 1; row <= 3; row++) {            
        for (int col = 1; col <= n - row ; col++){
            printf(" ");
        }
        for (int col = 1 ; col <= 2*row - 1 ; col++){
            printf("*");
        }
        printf("\n");

    }
        for (int row = 2; row >= 1; row--) {            
        for (int col = 1; col <= n - row ; col++){
            printf(" ");
        }
        for (int col = 1 ; col <= 2*row - 1 ; col++){
            printf("*");
        }
        printf("\n");

    }
    return 0 ;
}
