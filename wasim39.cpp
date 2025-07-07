#include<iostream>
using namespace std;
class Circle
{
    private:
        int radius;
    public:
        void Set_Radius(int radius)
        {
            this->radius=radius;
        }
        int Get_Radius()
        {
            return radius;
        }
        float Area_Of_Circle()
        {
            return 3.14*radius*radius;
        }
        float Area_Of_Circumferenc()
        {
            return 2*3.14*radius;
        }
};
int main()
{
    Circle c1;
    c1.Set_Radius(3);
    cout<<endl;
    return 0;
}