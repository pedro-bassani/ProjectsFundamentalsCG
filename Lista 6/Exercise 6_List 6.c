#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {
    srand(time(0));

    float studentGrades[10][3];

    for (int i = 0; i < 10; i++) {
        studentGrades[i][0] = rand() % 101 / 10.0;
        studentGrades[i][1] = rand() % 101 / 10.0;
        studentGrades[i][2] = (studentGrades[i][0] + 2 * studentGrades[i][1]) / 3.0;
    }

    for (int i = 0; i < 10; i++) {
        printf("Student %d: ", i + 1);
        for (int j = 0; j < 3; j++) {
            printf("%.1f ", studentGrades[i][j]);
        }
        if (studentGrades[i][2] >= 6.0) {
            printf("Approved!\n");
        } else {
            printf("Failed!\n");
        }
    }

    return 0;
}