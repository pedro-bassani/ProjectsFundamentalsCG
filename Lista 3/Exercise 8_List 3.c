#include  <stdio.h>

int main () {

    float buy, total;

    printf("What is the valor?");
    scanf("%f", &buy);

    if (buy <= 20) {
        total = buy * 0.45;
        printf("The total is %.2f", total);

    } else if (buy <= 50) {
        total = buy * 0.35;
        printf("The total is %.2f", total);

    } else if(buy > 50) {
        total = buy * 0.25;
        printf("The total is %.2f", total);
    }

    return 0;
}