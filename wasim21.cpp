#include<iostream>
using namespace std;
int Check_Whether_A_Given_Number_Is_A_Term_Of_Fibonacci_Series(int n);
int main()
{
    int n;
    cout<<"Enter any number\n";
    cin>>n;
    if(Check_Whether_A_Given_Number_Is_A_Term_Of_Fibonacci_Series(n))
    {
        cout<<"Yes! Given number is a term of Fibonacci series";
    }
    else
    {
        cout<<"No! Given number is not a term of fibonacci series.";
    }
    cout<<endl;
    return 0;
}
int Check_Whether_A_Given_Number_Is_A_Term_Of_Fibonacci_Series(int n)
{
    int a=0,b=1,s=0;
    while(s<=n)
    {
        if(s==n)
        {
            return 1;
        }
        s=a+b;
        a=b;
        b=s;
    }
    return 0;
}