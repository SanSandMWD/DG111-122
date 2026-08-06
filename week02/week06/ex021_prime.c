#include <stdio.h>

int main(void) {
    int n;
    int divisor = 0;

    printf("Enter positive integer: ");

    if (scanf("%d", &n) != 1) {
        printf("Invalid input\n");
        return 1;
    }

    if (n <= 1) {
        printf("%d is NOT a Prime Number\n", n);
        return 0;
    }

    for (int i = 2; i <= n / i; i++) {
        if (n % i == 0) {
            divisor = i;
            break;
        }
    }

    if (divisor == 0) {
        printf("%d is a Prime Number\n", n);
    } else {
        printf(
            "%d is NOT a Prime Number (divisible by %d)\n",
            n,
            divisor
        );
    }

    return 0;
}