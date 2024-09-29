#include<stdio.h>

int main()
{
    int n;
    printf("Type a interger: ");
    scanf("%d",&n); 

    if (n % 3 == 0)
    {
        printf("%d it's divided by 3.",n);
    }
    else
    {
        printf("%d it's not divided by 3.",n);
    }
    return 0;
}