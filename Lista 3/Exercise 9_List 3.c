#include  <stdio.h>

int main () {

    int choice;
    float result, valor, exEuro, exDolar;

    printf("\tExchange Today 28/09:\n");
    printf("Valor of Euro to Real: $6.07 and Valor of Dolar to Real: $5.43\n");
    printf("1) Exchange Real to Euro:\n");
    printf("2) Exchange Real to Dolar:\n");
    printf("3) Exchange Euro to Dolar:\n");
    printf("4) Exchange Euro to Real:\n");
    printf("5) Exchange Dolar to Euro:\n");
    printf("6) Exchange Dolar to Real:\n");
    printf("What is your choice?\n");

    if (choice == 1) {
        printf("Type the valor in Real: ");
        scanf("%f", &valor);
        result = valor / exEuro;
        printf("%.2f Real is equal to %.2f Euro.\n", valor, result);
    } else if (choice == 2) {
        printf("Type the valor in Real: ");
        scanf("%f", &valor);
        result = valor / exDolar;
        printf("%.2f Real is equal to %.2f Dolar.\n", valor, result);
    } else if (choice == 3) {
        printf("Type the valor in Euro: ");
        scanf("%f", &valor);
        result = valor * exEuro / exDolar;
        printf("%.2f Euro  is equal to %.2f Dolar.\n", valor, result);
    } else if (choice == 4) {
        printf("Type the valor in Euro: ");
        scanf("%f", &valor);
        result = valor * exEuro;
        printf("%.2f Euro is equal to %.2f Real.\n", valor, result);
    } else if (choice == 5) {
        printf("Type the valor in Dolar: ");
        scanf("%f", &valor);
        result = valor * exDolar / exEuro;
        printf("%.2f Dolar is equal to %.2f Euro.\n", valor, result);
    } else if (choice == 6) {
        printf("Type the valor in Dolar: ");
        scanf("%f", &valor);
        result = valor * exDolar;
        printf("%.2f Dolar is equal to %.2f Real.\n", valor, result);
    } else {
        printf("Invalid option.\n");
    }

    return 0;
}
