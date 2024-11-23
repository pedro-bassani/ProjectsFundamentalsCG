#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {
    int water_consumption[30];
    int i, j, temp;
    int total_consumption = 0;
    double average_consumption;
    int highest_day = 0, lowest_day = 0;

    srand(time(NULL));

    for (i = 0; i < 30; i++) {
        water_consumption[i] = rand() % 401 + 100;
        printf("Day %d: %d liters\n", i + 1, water_consumption[i]);
        total_consumption += water_consumption[i];
    }

    for (i = 0; i < 29; i++) {
        for (j = i + 1; j < 30; j++) {
            if (water_consumption[i] > water_consumption[j]) {
                temp = water_consumption[i];
                water_consumption[i] = water_consumption[j];
                water_consumption[j] = temp;
            }
        }
    }

    average_consumption = (double)total_consumption / 30;
    highest_day = 29;
    lowest_day = 0;

    printf("\nTotal water consumption: %d liters\n", total_consumption);
    printf("Average daily consumption: %.2f liters\n", average_consumption);
    printf("Day with highest consumption: Day %d\n", highest_day + 1);
    printf("Day with lowest consumption: Day %d\n", lowest_day + 1);

    return 0;
}