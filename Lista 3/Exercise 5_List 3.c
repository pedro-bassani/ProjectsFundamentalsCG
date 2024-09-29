#include<stdio.h>

int main()
{
    int n;
    printf("Type a interger: ");
    scanf("%d",&n); 
    int res = n % 2;
    if (res == 0)
    {
        printf("%d it's par.",n);
    }
    else
    {
        printf("%d it's impar.",n);
    }
    return 0;
}