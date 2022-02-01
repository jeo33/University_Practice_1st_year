#ifndef INFORMATION_H
#define INFORMATION_H
#include "Date.h"
#include<string>
#include <array>
#include<iostream>
using namespace std;
class information :public Date
{
    public:
        information();
     

        virtual ~information();

        void SetDate()
        {
            date_of_birth.SetDate();
        };
        void SetFirstName()
        {
            cout << "Please Enter the First Name" << endl;
            string s;
            cin >> s;
            for (int i = 0;i < s.length();i++)
            {
                first_name[i] = s.at(i);
            }
            first_name[s.length()] = '!';
        }
        void SetLastName()
        {
            cout << "Please Enter the Last Name" << endl;
            string s;
            cin >> s;
            for (int i = 0;i < s.length();i++)
            {
                last_name[i] = s.at(i);
            }
            last_name[s.length()] = '!';
        }

        

        void getFirstName()
        {
            cout << "First name is   :  ";
            
            for (int i = 0;i < 20;i++)
            {   
                if (first_name[i] != '!')cout << first_name[i];
                else break;
            }
            cout << endl;
        }

        void getLastName()
        {
            cout << "Last  name is   :  ";

            for (int i = 0;i < 20;i++)
            {
                if (last_name[i] != '!')cout << last_name[i];
                else break;
            }
            cout << endl;
        }

        void getDate()
        {
            date_of_birth.getDate();
        }

        int GetDay()
        {
            return date_of_birth.get_day();
        }
        int GetMonth()
        {
            return date_of_birth.get_month();
        }
        int GetYear()
        {
            return date_of_birth.get_year();
        }
    protected:

    private:
        char first_name[20];
        char last_name[20];
        Date date_of_birth;
};

#endif // INFORMATION_H
