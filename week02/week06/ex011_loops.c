#include <stdio.h>

int main(void) {
    int i;
    int sum = 0;
    for (i = 1; i <= 10; i++) {
        sum += i;
        printf("for: sum = %d\n", sum);
    }

 
    int sum_while = 0;
    i = 1;
    while (i <= 10) {
        sum_while += i;
        printf("while: sum = %d\n", sum_while);
        i++;
    }

    
    int sum_do_while = 0;
    i = 1;
    do {
        sum_do_while += i;
        printf("do-while: sum = %d\n", sum_do_while);
        i++;
    } while (i <= 10);
    return 0;
}

