#include <stdio.h>
#include <stdlib.h> // rand() to use to generate random numbers
#include <time.h>

int main () {

    int option;
    int lotery;

    printf("Choose the dice: \n");
    printf("1 - D4\n");
    printf("2 - D6\n");
    printf("3 - D8\n");
    printf("4 - D10\n");
    printf("5 - D12\n");
    printf("6 - D16\n");
    scanf("%d", &option);

        if (option == 1) {

            lotery = 1 + rand() % 4;
        }

        else if (option == 2) {

             lotery = 1 + rand() % 6;
        }

        else if (option == 3) {

             lotery = 1 + rand() % 8;
        }

        else if (option == 4) {

             lotery = 1 + rand() % 10;
        }

        else if (option == 5) {

             lotery = 1 + rand() % 12;
        }
        
        else if (option == 6) {

             lotery = 1 + rand() % 16;
        }

        else {

            printf("Invalid option!");
            
            lotery = -1;
        }

        if (lotery >= 0) {

            printf("The lotery value is %d", lotery);
        }

    return 0;

}