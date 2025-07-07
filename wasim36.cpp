#include<iostream>
using namespace std;
class Time
{
    private:
        int hour;
        int min;
        int sec;
    public:
        void Set_Time(int hour,int min,int sec)
        {
            this->hour=hour;
            this->min=min;
            this->sec=sec;
        }
        void Show_Time()
        {
            cout<<hour<<":"<<min<<":"<<sec;
        }
};
int main()
{
    Time t1;
    t1.Set_Time(12,34,56);
    t1.Show_Time();
    cout<<endl;
    return 0;
}