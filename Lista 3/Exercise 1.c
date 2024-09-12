#include <stdio.h>

int main () {

    float numA, numB, result;

    printf("Write the first num to divide: ", numA);
    scanf("%f", &numA);

    printf("Write the second num to divide: ", numB);
    scanf("%f", &numB);

    if(numA != 0) {
        
        result = numA/numB;

        printf("Your result is: %f", result);

    } else if (numB != 0) {

        result = numB/numA;

        printf("Your result is: %f", result);

    } else if (numA == 0 && numB == 0) {

        printf("ERRO!");
        
    }

    return 0;

}