#include<iostream>
using namespace std;
int Add_Two_Numbers_Different_Data_Types(int a,int b);
float Add_Two_Numbers_Different_Data_Types(int a,float b);
float Add_Two_Numbers_Different_Data_Types(float a,int b);
float Add_Two_Numbers_Different_Data_Types(float a,float b);
int main()
{
    float a,b;
    cout<<"Enter any two numbers\n";
    cin>>a>>b;
    cout<<"Sum is="<<Add_Two_Numbers_Different_Data_Types(a,b);
    cout<<endl;
    return 0;
}
int Add_Two_Numbers_Different_Data_Types(int a,int b)
{
    return a+b;
}
float Add_Two_Numbers_Different_Data_Types(int a,float b)
{
    return a+b;
}
float Add_Two_Numbers_Different_Data_Types(float a,int b)
{
    return a+b;
}
float Add_Two_Numbers_Different_Data_Types(float a,float b)
{
    return a+b;
}