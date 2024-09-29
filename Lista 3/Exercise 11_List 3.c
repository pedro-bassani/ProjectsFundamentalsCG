#include <stdio.h>

int main() {
    int amount, hundreds, fifties, twenties, tens, fives, ones;

    printf("Enter the amount (in reais please): ");
    scanf("%d", &amount);

    hundreds = amount / 100;
    amount %= 100;
    fifties = amount / 50;
    amount %= 50;
    twenties = amount / 20;
    amount %= 20;
    tens = amount / 10;
    amount %= 10;
    fives = amount / 5;
    amount %= 5;
    ones = amount;

    if (hundreds > 0) {
        printf("%d R$100 note(s).\n", hundreds);
    }
    if (fifties > 0) {
        printf("%d R$50 note(s).\n", fifties);
    }
    if (twenties > 0) {
        printf("%d R$20 note(s).\n", twenties);
    }
    if (tens > 0) {
        printf("%d R$10 note(s).\n", tens);
    }
    if (fives > 0) {
        printf("%d R$5 note(s).\n", fives);
    }
    if (ones > 0) {
        printf("%d R$1 note(s).\n", ones);
    }

    return 0;
}