#include<iostream>
using namespace std;
int Calculate_LCM_Of_Three_Numbers(int a,int b,int c);
int main()
{
    int a,b,c;
    cout<<"Enter any three number\n";
    cin>>a>>b>>c;
    cout<<"LCM is="<<Calculate_LCM_Of_Three_Numbers(a,b,c);
    cout<<endl;
    return 0;
}
int Calculate_LCM_Of_Three_Numbers(int a,int b,int c)
{
    int i=2,s=1;
    while(a!=1 || b!=1 || c!=1)
    {
        if(a%i==0 && b%i==0 && c%i==0)
        {
            a/=i;
            b/=i;
            c/=i;
            s*=i;
            continue;
        }
        else if(a%i==0 && b%i==0)
        {
            a/=i;
            b/=i;
            s*=i;
            continue;
        }
        else if(b%i==0 && c%i==0)
        {
            b/=i;
            c/=i;
            s*=i;
            continue;
        }
        else if(a%i==0 && c%i==0)
        {
            a/=i;
            c/=i;
            s*=i;
            continue;
        }
        else if(a%i==0)
        {
            a/=i;
            s*=i;
            continue;
        }
        else if(b%i==0)
        {
            b/=i;
            s*=i;
            continue;
        }
        else if(c%i==0)
        {
            c/=i;
            s*=i;
            continue;
        }
        i++;
    }
    return s;
}