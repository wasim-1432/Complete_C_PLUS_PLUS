#include<iostream>
using namespace std;
void Swap_Two_Integer_Using_Call_By_Reference(int& a,int& b);
int main()
{
    int a,b;
    cout<<"Enter any two numbers\n";
    cin>>a>>b;
    Swap_Two_Integer_Using_Call_By_Reference(a,b);
    cout<<endl;
    return 0;
}
void Swap_Two_Integer_Using_Call_By_Reference(int& a,int& b)
{
    int c=a;
    a=b;
    b=c;
    cout<<"A="<<a<<" B="<<b;
}