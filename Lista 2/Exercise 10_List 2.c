#include <stdio.h>

int main () {

    int shirt, pants, belt;
    float tShirt, tPants, tBelt, total, discount;
    float ten = 0.10;

    printf("How much T-shirts did you buy? ");
    scanf("%d", &shirt);

    printf("How much Pants did you buy? ");
    scanf("%d", &pants);

    printf("How much Belts did you buy? ");
    scanf("%d", &belt);

    tShirt = shirt * 25;
    tPants = pants * 100;
    tBelt = belt * 40;

    total = tShirt + tPants + tBelt;
    discount = total * (1 - ten);

    printf("Without discount the price is R$ %.2f \n", total);
    printf("With discount the price is R$ %.2f", discount);

    return 0;
}