#include <stdio.h>

int main () {

    float shop, discount;
    float fifteen = 0.15;
    
    printf("How much did you bought in shopping? R$ ");
    scanf("%f", &shop);

    discount = shop * (1 - fifteen);

    printf("Without discount the price is R$ %.2f \n", shop);
    printf("With discount the price is R$ %.2f", discount);


    return 0;
}