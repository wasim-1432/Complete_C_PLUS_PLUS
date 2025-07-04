#include<iostream>
using namespace std;
int main()
{
    int arr[10],sum=0;
    int i;
    cout<<"Enter 10 numbers of the arrays\n";
    for(i=0;i<10;i++)
    {
        cin>>arr[i];
    }
    for(i=0;i<10;i++)
    {
        sum=sum+arr[i];
    }
    cout<<"Required Answer is="<<sum;
    cout<<endl;
    return 0;
}