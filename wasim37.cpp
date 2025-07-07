#include<iostream>
using namespace std;
class Date
{
    private:
        int d;
        int m;
        int y;
    public:
        void Set_Date(int d,int m,int y)
        {
            this->d=d;
            this->m=m;
            this->y=y;
        }
        int Get_Day()
        {
            return d;
        }
        int Get_Month()
        {
            return m;
        }
        int Get_Year()
        {
            return y;
        }
        void Show_data()
        {
            cout<<d<<"/"<<m<<"/"<<y;
        }
};
int main()
{
    Date d1;
    d1.Set_Date(23,7,2026);
    d1.Show_data();
    cout<<endl;
    return 0;
}