#include<stdio.h>
int Check_Whether_A_Given_Number_Is_Prime_Or_Not(int n);
int main()
{
    int n;
    printf("Enter any number\n");
    scanf("%d",&n);
    if(Check_Whether_A_Given_Number_Is_Prime_Or_Not(n))
    {
        printf("Prime number");
    }
    else
    {
        printf("Not Prime Number");
    }
    printf("\n");
    return 0;
}
int Check_Whether_A_Given_Number_Is_Prime_Or_Not(int n)
{
    int i=2;
    while(i<=n)
    {
        if(n%i==0)
        {
            break;
        }
        i++;
    }
    if(n==i)
    {
        return 1;
    }
    return 0;
}