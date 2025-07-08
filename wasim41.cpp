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
            Normalize();
            cout<<hour<<":"<<min<<":"<<sec<<endl;
        }
        void Normalize()
        {
            min=min+sec/60;
            sec=sec%60;
            hour=hour+min/60;
            min=min%60;
            hour=hour%12;
        }
        Time Add(Time T)
        {
            Time temp;
            temp.hour=hour+T.hour;
            temp.min=min+T.min;
            temp.sec=sec+T.sec;
            //Normalize();
            return temp;
        }
        bool Is_Greater(Time T)
        {
            if(hour>T.hour)
            {
                return true;
            }
            else if(hour<T.hour)
            {
                return false;
            }
            else if(min>T.min)
            {
                return true;
            }
            else if(min<T.min)
            {
                return false;
            }
            else if(sec>T.sec)
            {
                return true;
            }
            else if(sec<T.sec)
            {
                return false;
            }
        }
};
int main()
{
    Time t1,t2;
    t1.Set_Time(13,33,60);
    t2.Set_Time(12,23,34);
    t1=t1.Add(t2);
    t1.Show_Time();
    cout<<endl;
    return 0;
}