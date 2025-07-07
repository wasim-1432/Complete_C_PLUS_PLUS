#include<iostream>
using namespace std;
class date
{
    private:
        int day;
        int month;
        int year;
    public:
        void Set_Date(int day,int month,int year)
        {
            this->day=day;
            this->month=month;
            this->year=year;
        }
        int Get_Month()
        {
            return month;
        }
        string Get_Month_Name()
        {
            switch(Get_Month())
            {
                case 1:
                    return "Jun";
                case 2:
                    return "Feb";
                case 3:
                    return "Mar";
                case 4:
                    return "April";
                case 5:
                    return "May";
                case 6:
                    return "June";
                case 7:
                    return "July";
                case 8:
                    return "Aug";
                case 9:
                    return "Sept";
                case 10:
                    return "Oct";
                case 11:
                    return "Nov";
                case 12:
                    return "Dec";
            }
        }
        void Show_Date()
        {
            cout<<day<<"-"<<month<<"-"<<year<<endl;
            cout<<day<<"-"<<Get_Month_Name()<<"-"<<year<<endl;
        }
};
int main()
{
    date d1;
    d1.Set_Date(12,3,2025);
    d1.Show_Date();
    cout<<endl;
    return 0;
}