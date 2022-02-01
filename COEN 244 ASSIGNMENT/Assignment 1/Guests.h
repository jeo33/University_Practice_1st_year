#ifndef GUESTS_H
#define GUESTS_H
#include "Date.h"
#include "information.h"
#include <iostream>
class Guests :  public information
{
    public:
        Guests();
       
        void SetCheckInDate()
        {
            cout<<"Check in date: ";
            Check_In_date.SetHotelDate();
        };

        void SetCheckOutDate()
        {
            cout << "Check out date: ";
            Check_out_date.SetHotelDate();
        };

        void GetCheckInDate()
        {
            Check_In_date.getDate();
        }
        void GetCheckOutDate()
        {
            Check_out_date.getDate();
        }

        int GetCheckOutDay()
        {
            return Check_out_date.get_day();
        }
        int GetCheckInDay()
        {
            return Check_In_date.get_day();
        }

        void setInfo(information x, int z)
        {
            Guests_Same_Room[z]= x;

        }

        information getInfo(int z)
        {
           

            return Guests_Same_Room[z];

        }

        void SetRoomNumber(int x)
        {
            RoomNumber = x;
        }

        int GetRoomNumber()
        {
            return RoomNumber ;
        }


        virtual ~Guests();
        
    protected:

    private:
        Date Check_In_date;
        Date Check_out_date;
        information Guests_Same_Room[4];
        int RoomNumber;

};

#endif // GUESTS_H
