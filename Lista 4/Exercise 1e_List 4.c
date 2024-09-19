#include <stdio.h>
#include <stdlib.h> //rand()
#include <time.h> //time()

int main () {

    int cont = 0;
    int n; //number that will be read
    int plus = 0;
    float media;

    while (cont < 5) {

    printf("Type a number: ");
    scanf("%d", &n);

    plus = plus + n;

    cont++;
    }

    printf("The plus between numbers is: %d\n", plus);


    media = plus / 5;

    printf("The media is: %.2f\n", media);

    return 0;
}