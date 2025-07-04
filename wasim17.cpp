#include<iostream>
using namespace std;
void Print_Prime_Number_Between_Two_Given_Numbers(int a,int b);
int main()
{
    int a,b;
    cout<<"Enter any two numbers\n";
    cin>>a>>b;
    Print_Prime_Number_Between_Two_Given_Numbers(a,b);
    cout<<endl;
    return 0;
}
void Print_Prime_Number_Between_Two_Given_Numbers(int a,int b)
{
    int n,i;
    for(n=a;n<b;n++)
    {
        i=2;
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
            cout<<n<<" ";
        }
    }
}