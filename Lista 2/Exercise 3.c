#include <stdio.h>

int main () {

    int a = 1;
    int b = 2;
    int c = 0;

    c = (a < b)? a : + b;

    printf("The result is %d", c);

    return 0;

}