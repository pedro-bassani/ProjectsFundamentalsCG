#include <stdio.h>

int main () {

    int smarthphone, sTotal , tablet , tTotal, total;

    printf("Smarthphone costs: R$ 1000,00 \n");
    printf("Tablet costs: R$ 1500,00 \n");

    printf("How much Smarthphone did you bought? ");
    scanf("%d", &smarthphone);

    printf("How much Tablet did you bought? ");
    scanf("%d", &tablet);

    sTotal = smarthphone * 1000;
    tTotal = tablet * 1500;
    total = sTotal + tTotal;

    printf("You sold R$ %d in smarthphones and Tablets \n", total);

    return 0;
}