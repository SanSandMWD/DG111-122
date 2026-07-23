#include <stdio.h>

int main(void) {
    int score;
  


    printf("=== คะเเนน ===\n");
    /* prompt for score, then read it */
    printf("score: ");
    if (scanf("%d", &score) != 1) {
        return 1;
    }

    if (score >= 80 && score <= 100) {
        printf("Score: %d --> Grade A (4.0) - Pass\n", score);
    } else if (score >= 75 && score <= 79) {
        printf("Score: %d --> Grade B+ (3.5) - Pass\n", score);
    } else if (score >= 70 && score <= 74) {
        printf("Score: %d --> Grade B (3.0) - Pass\n", score);
    } else if (score >= 65 && score <= 69) {
        printf("Score: %d --> Grade C+ (2.5) - Pass\n", score);
    } else if (score >= 60 && score <= 64) {
        printf("Score: %d --> Grade C (2.0) - Pass\n", score);
    } else if (score >= 55 && score <= 59) {
        printf("Score: %d --> Grade D+ (1.5) - Pass\n", score);
    } else if (score >= 50 && score <= 54) {
        printf("Score: %d --> Grade D (1.0) - Pass\n", score);
    } else {
        printf("Score: %d --> Grade F (0.0) - Fail\n", score);
    }
    return 0;
}




