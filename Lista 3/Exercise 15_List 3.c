#include <stdio.h>

int main() {
    float value, discount, total;
    int payment;

    printf("Enter the normal value of the product: R$ ");
    scanf("%f", &value);

    printf("Choose a payment condition:\n");
    printf("1 - Cash (15 porcent discount)\n");
    printf("2 - Credit Card (10 porcent discount)\n");
    printf("3 - In 2 times (no interest)\n");
    printf("4 - In 3 times (10 porcent interest)\n");
    scanf("%d", &payment);

    if (payment == 1) {
        discount = value * 0.15;
        total = value - discount;
    } else if (payment == 2) {
        discount = value * 0.10;
        total = value - discount;
    } else if (payment == 3) {
        total = value;
    } else if (payment == 4) {
        total = value + (value * 0.10);
    } else {
        printf("Invalid payment condition.\n");
        
    }

    printf("Total value: R$ %.2f\n", total);

    return 0;
}