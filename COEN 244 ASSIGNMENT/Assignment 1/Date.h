#ifndef DATE_H
#define DATE_H
#include<iostream>
#include<iomanip>
using namespace std;
class Date
{
    public:
        Date();
        virtual ~Date();
        void set_month(int m){Month= m;};
        void set_day(int d){day= d;};
        void set_year(int y){year= y;};
        int get_month(){return Month;};
        int get_day(){return day;};
        int get_year(){return year;};
        
        void SetDate()
        {
            int x, y, z;

            do {
                    cout << "Enter the date of birth in the format of DD MM YYYY:";
                    cin >> x >> y >> z;
                    set_month(y);
                    set_day(x);
                    set_year(z);
                } while ((x > 31 || x < 1) || (y > 12 || y < 1) || (z > 2022 || z < 1900));
        };

        void SetHotelDate()
        {
            int x, y, z;
            do {
                cout << "Enter the date in the format of DD 03 2022:";
                cin >> x >> y >> z;
                set_month(y);
                set_day(x);
                set_year(z);

            } while ((x > 7 || x < 1)|| (y != 3) || (z != 2022));


        };
        

        void getDate()
        {
            cout << setw(2)<<get_day() <<"/" <<setw(2) << get_month() << "/" << setw(4) << get_year() << endl;
        }
    private:
        int Month;
        int day;
        int year;
};

#endif // DATE_H
