#include<iostream>
using namespace std;
int Find_Max_Number_Using_Function_Overloading(int a,int b);
float Find_Max_Number_Using_Function_Overloading(float a,float b);
int main()
{
    float a,b;
    cout<<"Enter any two numbers\n";
    cin>>a>>b;
    cout<<"Max Numbers is="<<Find_Max_Number_Using_Function_Overloading(a,b);
    cout<<endl;
    return 0;
}
int Find_Max_Number_Using_Function_Overloading(int a,int b)
{
    if(a>b)
    {
        return a;
    }
    return b;
}
float Find_Max_Number_Using_Function_Overloading(float a,float b)
{
    if(a>b)
    {
        return a;
    }
    return b;
}