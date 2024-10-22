#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <stdbool.h> // type (bool)


void position(int posHamster1, int posHamster2) {
    printf("H1: ");
    for (int i = 0; i < posHamster1; i++) {
        printf("* ");
    }
    printf("\n");

    printf("H2: ");
    for (int i = 0; i < posHamster2; i++) {
        printf("* ");
    }
}

int main() {
    srand(time(0)); 
    int posHamster1 = 0, posHamster2 = 0;  
    bool end = false;  

    while (!end) { 
       
        int n1 = rand() % 5 + 1;
        if (n1 == 1) {
            posHamster1++;
        } else if (n1 == 2) {
            posHamster1 += 2;
        } else if (n1 == 4) {
            posHamster1--;
        } else if (n1 == 5) {
            posHamster1 -= 2;
        }

        if (posHamster1 < 0) {
            posHamster1 = 0;
        }

        int n2 = rand() % 5 + 1;
        if (n2 == 1) {
            posHamster2++;
        } else if (n2 == 2) {
            posHamster2 += 2;
        } else if (n2 == 4) {
            posHamster2--;
        } else if (n2 == 5) {
            posHamster2 -= 2;
        }

        if (posHamster2 < 0) {
            posHamster2 = 0;
        }

        position(posHamster1, posHamster2);

        if (posHamster1 >= 12 && posHamster2 >= 12) {
            printf("It's a tie!\n");
            end = 1;
        } else if (posHamster1 >= 12) {
            printf("Hamster 1 wins!\n");
            end = 1;
        } else if (posHamster2 >= 12) {
            printf("Hamster 2 wins!\n");
            end = 1;
        }
    }

    printf("The race has ended!\n");
    return 0;
}