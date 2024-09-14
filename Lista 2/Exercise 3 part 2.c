#include <stdio.h>

int main () {

     float kilo, plate;

    printf("Your plate weighs: kg ");
    scanf("%f", &plate);

    kilo = plate * 40;

    printf("You will pay R$ %.2f  \n", kilo);

    return 0;
}