#include <stdio.h>

int main() {
    int age;

    printf("Type the age of swimmer: ");
    scanf("%d", &age);

    if (age >= 5 && age <= 7) {
        printf("Category childish A\n");
    } else if (age >= 8 && age <= 10) {
        printf("Category childish B\n");
    } else if (age >= 11 && age <= 13) {
        printf("Category teen A\n");
    } else if (age >= 14 && age <= 17) {
        printf("Category teen B\n");
    } else {
        printf("Category senior\n");
    }

    return 0;
}