#include <stdio.h>

int main() {
    int number, i;
    char continue_calculation;

    do {
        printf("Enter a number between 1 and 9: ");
        scanf("%d", &number);

        if (number < 1 || number > 9) {
            printf("Invalid number. Enter a number between 1 and 9.\n");
            continue;
        }

        printf("Multiplication table of %d:\n", number);
        for (i = 1; i <= 10; i++) {
            printf("%d x %d = %d\n", number, i, number * i);
        }

        printf("Do you want to calculate another number? (y/n): ");
        scanf(" %c", &continue_calculation); // The space before %c ignores whitespace
    } while (continue_calculation == 'y' || continue_calculation == 'Y');

    return 0;
}