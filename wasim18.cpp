#include<iostream>
using namespace std;
int Heighest_Digit_In_A_Given_Number(int n);
int main()
{
    int n;
    cout<<"Ener any number\n";
    cin>>n;
    cout<<"Max Digit is="<<Heighest_Digit_In_A_Given_Number(n);
    cout<<endl;
    return 0;
}
int Heighest_Digit_In_A_Given_Number(int n)
{
    int digit,maxDigit=0;
    while(n)
    {
        digit=n%10;
        if(digit>maxDigit)
        {
            maxDigit=digit;
        }
        n/=10;
    }
    return maxDigit;
}