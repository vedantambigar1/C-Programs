#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {
    int choice, maxNumber, secret, guess;
    int attempts, score;

    srand(time(NULL));

    printf("=================================\n");
    printf("       NUMBER HUNT - C GAME      \n");
    printf("=================================\n");

    printf("\nChoose difficulty:\n");
    printf("1. Easy   (1 - 50)\n");
    printf("2. Medium (1 - 100)\n");
    printf("3. Hard   (1 - 500)\n");
    printf("Enter choice: ");
    scanf("%d", &choice);

    switch (choice) {
        case 1:
            maxNumber = 50;
            attempts = 10;
            break;
        case 2:
            maxNumber = 100;
            attempts = 7;
            break;
        case 3:
            maxNumber = 500;
            attempts = 6;
            break;
        default:
            printf("Invalid choice!\n");
            return 0;
    }

    secret = rand() % maxNumber + 1;
    score = attempts * 10;

    printf("\nI have selected a number between 1 and %d.\n", maxNumber);
    printf("You have %d attempts to find it!\n\n", attempts);

    for (int i = 1; i <= attempts; i++) {
        printf("Attempt %d/%d - Enter your guess: ", i, attempts);
        scanf("%d", &guess);

        if (guess == secret) {
            printf("\nCORRECT! You found the number!\n");
            printf("The number was: %d\n", secret);
            printf("Your score: %d points\n", score);
            printf("You used %d attempt(s).\n", i);
            return 0;
        }

        if (guess < secret)
            printf("Too LOW!\n");
        else
            printf("Too HIGH!\n");

        // Hint after 3 wrong attempts
        if (i == 3 && secret % 2 == 0)
            printf("HINT: The number is EVEN.\n");
        else if (i == 3)
            printf("HINT: The number is ODD.\n");

        score -= 10;
        if (score < 0)
            score = 0;
    }

    printf("\nGAME OVER!\n");
    printf("The secret number was %d.\n", secret);
    printf("Your score: %d points\n", score);

    return 0;
}
