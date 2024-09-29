#include <stdio.h>

int main () {

    float salary, discount;

    printf("What is your salary? ");
    scanf("%f", &salary);
    discount = salary * 0.11;

    if (discount > 318.20){
        discount = 318.20;
    }
    
    printf("The valor with discount is: %.2f\n", discount);

    return 0;
}