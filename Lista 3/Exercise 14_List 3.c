#include <stdio.h>

int main() {
    int age, dependents, depAge;
    float total;

    printf("Enter your age: ");
    scanf("%d", &age);

    printf("Enter the number of dependents: ");
    scanf("%d", &dependents);

    total = 300;

    for (int i = 0; i < dependents; i++) {

        printf("Enter the age of dependent %d: ", i + 1);
        scanf("%d", &depAge);

        if (depAge < 10) {
            total += 100;
        } else if (depAge <= 30) {
            total += 220;
        } else if (depAge <= 60) {
            total += 395;
        } else {
            total += 480;
        }
    }

    printf("Total cost: R$%.2f\n", total);

    return 0;
}