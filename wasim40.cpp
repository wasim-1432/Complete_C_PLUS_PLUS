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
            if(imaginary>=0)
            {
                cout<<real<<"+"<<imaginary<<"i";
            }
            else
            {
                cout<<real<<imaginary<<"i";
            }
        }
        Complex Add(Complex C)
        {
            Complex temp;
            temp.real=real+C.real;
            temp.imaginary=imaginary+C.imaginary;
            return temp;
        }
        Complex Sub(Complex C)
        {
            Complex temp;
            temp.real=real-C.real;
            temp.imaginary=imaginary-C.imaginary;
            return temp;
        }
        Complex Multiply(Complex C)
        {
            Complex temp;
            temp.real=real*C.real-imaginary*C.imaginary;
            temp.imaginary=real*C.imaginary+imaginary*C.real;
            return temp;
        }
};
int main()
{
    Complex c1,c2;
    c1.Set_Data(2,3);
    c2.Set_Data(2,3);
    c1=c1.Multiply(c2);
    c1.Show_Data();
    cout<<endl;
    return 0;
}