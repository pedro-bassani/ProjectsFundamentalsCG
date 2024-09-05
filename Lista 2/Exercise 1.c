#include <stdio.h>

int main () {

    int minutes, seconds;

    printf("Type the minutes:");
    scanf("%d", &minutes);

    seconds = minutes * 60;

    printf("Your quantity in seconds is %d\n", seconds);

    return 0;
    
}
