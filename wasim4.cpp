#include<stdio.h>
int main()
{
    int a,b,i=1,s=1;
    printf("Enter any two numbers\n");
    scanf("%d%d",&a,&b);
    while(a!=1 || b!=1)
    {
        if(a%i==0 && b%i==0)
        {
            a=a/i;
            b=b/i;
            s=s*i;
        }
        else if(a%i==0)
        {
            a=a/i;
            s=s*i;
        }
        else if(b%i==0)
        {
            b/=i;
            s=s*i;
        }
        i++;
    }
    printf("LCM is=%d",s);
    printf("\n");
    return 0;
}