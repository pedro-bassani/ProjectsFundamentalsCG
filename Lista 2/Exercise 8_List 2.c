#include <stdio.h>

int main () {

    float celsius, fahrenheit;

    printf("Type the temperature in Celsius to convert in Fahrenheit: ");
    scanf("%f", &celsius);

    fahrenheit = (celsius * 1.8) + 32;

    printf("The temperature in Fahrenheit is %.2f °F", fahrenheit);
}