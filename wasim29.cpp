#include<iostream>
using namespace std;
void Print_Prime_Factor_Of_A_Given_Number(int n);
int main()
{
    int n;
    cout<<"Enter any number\n";
    cin>>n;
    Print_Prime_Factor_Of_A_Given_Number(n);
    cout<<endl;
    return 0;
}
int Check_Prime_Number(int n)
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
void Print_Prime_Factor_Of_A_Given_Number(int n)
{
    int* temp=new int[n];
    int i=2,k=0;
    while(n!=1)
    {
        if(n%i==0)
        {
            if(Check_Prime_Number(i))
            {
                temp[k++]=i;
            }
            n/=i;
            continue;
        }
        i++;
    }
    for(i=0;i<=k;i++)
    {
        if(i>0 && temp[i]!=temp[i-1])
        {
            cout<<temp[i-1]<<" ";
        }
    }
}