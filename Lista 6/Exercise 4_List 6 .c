#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {
    int matrix[4][6];
    int sum_row2 = 0, sum_col5 = 0, sum_product = 0, sum_even_cols = 0, sum_odd_rows = 0;
    srand(time(NULL));

    for (int i = 0; i < 4; i++) {
        for (int j = 0; j < 6; j++) {
            matrix[i][j] = rand() % 21 - 10; 
        }
    }

    for (int j = 0; j < 6; j++) {
        sum_row2 += matrix[1][j]; 
        sum_col5 += matrix[j][4]; 
    }
    for (int i = 0; i < 4; i++) {
        sum_product += matrix[0][i] * matrix[3][i]; 
    for (int i = 0; i < 4; i++) {
        for (int j = 0; j < 6; j += 2) {
            sum_even_cols += matrix[i][j]; 
        }
    }
    for (int i = 1; i < 4; i += 2) {
        for (int j = 0; j < 6; j++) {
            sum_odd_rows += matrix[i][j]; 
        }
    }

    printf("Sum of second row: %d\n", sum_row2);
    printf("Sum of fifth column: %d\n", sum_col5);
    printf("Sum of product of first and fourth rows: %d\n", sum_product);
    printf("Sum of even columns: %d\n", sum_even_cols);
    printf("Sum of odd rows: %d\n", sum_odd_rows);

    return 0;
    }
}