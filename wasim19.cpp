#include<iostream>
using namespace std;
int Calculate_Power(int n,int y);
int main()
{
    int n,y;
    cout<<"Enter the number and power value\n";
    cin>>n>>y;
    cout<<"Required Answer is="<<Calculate_Power(n,y);
    cout<<endl;
    return 0;
}
int Calculate_Power(int n,int y)
{
    int s=1;
    while(y)
    {
        s=s*n;
        y--;
    }
    return s;
}