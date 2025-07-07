#include<iostream>
using namespace std;
class Complex
{
    private:
        int real;
        int imaginary;
    public:
        void Set_Data(int real,int imaginary)
        {
            this->real=real;
            this->imaginary=imaginary;
        }
        void Show_Data()
        {
            if(imaginary>0)
            {
                cout<<real<<"+"<<imaginary<<"i";
            }
            else
            {
                cout<<real<<imaginary<<"i";
            }
        }
};
int main()
{
    Complex c1;
    c1.Set_Data(2,3);
    c1.Show_Data();
    cout<<endl;
    return 0;
}