#include<stdio.h>
int main()
{
    int n;
    printf("Enter any number\n");
    scanf("%d",&n);
    if(n%2==0)
    {
        printf("Even number");
    }
    else
    {
        printf("Odd Number");
    }
    printf("\n");
    return 0;
}