#include <stdio.h>

int main() {
    int choice;
    float gA, gB, gC, media, finalmedia;

    printf("Enter Grade A: ");
    scanf("%f", &gA);

    printf("Enter Grade B: ");
    scanf("%f", &gB);

    media = (gA + gB) / 2;

    printf("media: %.2f\n", media);

    if (media >= 6) {
        printf("Approved\n");
    } else {
        printf("Recovery\n");

        printf("Do you want to replace 1-Grade A or 2-Grade B? ");
        scanf("%d", &choice);

        printf("Enter Grade C: ");
        scanf("%f", &gC);

        if (choice == 1) {
            finalmedia = (gC + gB) / 2;
        } else if (choice == 2) {
            finalmedia = (gA + gC) / 2;
        } else {
            printf("Invalid choice choice.\n");
            
        }

        printf("Final media: %.2f\n", finalmedia);

        if (finalmedia >= 6) {
            printf("Approved\n");
        } else {
            printf("Failed\n");
        }
    }

    return 0;
}