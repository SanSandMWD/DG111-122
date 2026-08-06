#include <stdio.h>

int main(void) {
int count = 1;
int row = 3;
int cols = 5 ;

  for (int i = 0; i <= row - 1; i++) {  
    printf("+---+---+---+---+---+\n");
    printf("|");
    for (int j = 0 ; j <= cols - 1 ; j++){
        printf("%2d |", count);
        count += 1 ;
    }
    printf("\n");

  }          
printf("+---+---+---+---+---+\n");

    return 0 ;
}