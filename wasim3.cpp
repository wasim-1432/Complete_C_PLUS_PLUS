#include<stdio.h>
int main()
{
    int a,b;
    printf("Enter any two numbers\n");
    scanf("%d%d",&a,&b);
    int c=a;
    a=b;
    b=c;
    printf("A=%d , B=%d\n",a,b);
    printf("\n");
    return 0;
}