#include<iostream>
using namespace std;
void Print_Pascal_Triangle(int n);
int main()
{
    int n;
    cout<<"Enter the row\n";
    cin>>n;
    Print_Pascal_Triangle(n);
    cout<<endl;
    return 0;
}
int Fact(int n)
{
    int s=1;
    while(n)
    {
        s=s*n;
        n--;
    }
    return s;
}
void Print_Pascal_Triangle(int n)
{
    int i,j,k,t;
    for(i=1;i<=n;i++)
    {
        k=1;
        t=0;
        for(j=1;j<=2*n-1;j++)
        {
            if(j>=n+1-i && j<=n-1+i && k)
            {
                cout<<Fact(i-1)/Fact(i-1-t)/Fact(t);
                k=0;
                t++;
            }
            else
            {
                cout<<" ";
                k=1;
            }
        }
        cout<<endl;
    }
}