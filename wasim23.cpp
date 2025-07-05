#include<iostream>
using namespace std;
int Add_Two_Or_Three_Numbers_Using_Default_Argument(int a,int b,int c=0);
int main()
{
    int a,b,c;
    cout<<"Enter any two numbers\n";
    cin>>a>>b;
    cout<<"Sum is="<<Add_Two_Or_Three_Numbers_Using_Default_Argument(a,b)<<endl;
    cout<<"Enter any three numbers\n";
    cin>>a>>b>>c;
    cout<<"Sum is="<<Add_Two_Or_Three_Numbers_Using_Default_Argument(a,b,c);
    cout<<endl;
    return 0;
}
int Add_Two_Or_Three_Numbers_Using_Default_Argument(int a,int b,int c)
{
    return a+b+c;
}