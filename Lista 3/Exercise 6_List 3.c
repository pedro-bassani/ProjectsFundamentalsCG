#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main () {

    int num, choice, random, combine;

    printf("Do you bet 1-PAR or 2-IMPAR?");
    scanf("%d", &choice);
    
    printf("Type a number between 0 to 5: ");
    scanf("%d", &num);
    
    random = rand() % 6;

    combine = num + random;

    if((choice == 1 && combine % 2 == 0) || (choice == 2 && combine % 2 != 0)) {

        printf("You win!");

    } else {

        printf("The program Win ;-;");
    }

    return 0;
}