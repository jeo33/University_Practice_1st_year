#ifndef GUESTS_RES_REQUEST_H
#define GUESTS_RES_REQUEST_H
#include "Guests.h"

class Guests_Res_Request
{
    public:
        static int id;
        
        Guests_Res_Request();
        virtual ~Guests_Res_Request();
        
        void SetGuests_Same_Room()
        {   
            int number;
            cout << "How many guests will be :";
            cin >> number;
            Guests *g=new Guests();
            do {
                g->SetCheckInDate();
                g->SetCheckOutDate();
            } while (g->GetCheckOutDay() <= g->GetCheckInDay());
            
            int nights;
            nights = g->GetCheckOutDay() - g->GetCheckInDay();
            SetNumberOfNights(nights);
           
            information temp;
            for (int i = 0;i < number;i++)
            {
                
                temp.SetFirstName();
                temp.SetLastName();
                temp.SetDate();
                g->setInfo(temp, i);
                SetRequest(g);
                
            }
            
           
        }
        
        void GetGuests_Same_Room()
        {
            cout << "\n****************************************************************" << endl;
            Guests *g = new Guests();
                g=GetRequest();

            for (int i = 0;i < 4;i++)
            {
                int flag=0;
                information temp;
                temp = g->getInfo(i);
                flag = temp.GetDay();
                if (flag == 1111)break;
                else

                {
                    temp.getFirstName();
                    temp.getLastName();
                    cout << "Date  of  birth : ";
                    temp.getDate();
                }
                cout << "\n----------------------------------------------------------------" << endl;
            }
            
            cout << "Check in  date  : ";g->GetCheckInDate();
            cout << "Check out date  : ";g->GetCheckOutDate();
            cout << "\n----------------------------------------------------------------" ;
            cout << "\nRoom      number:  "<<g->GetRoomNumber();
            cout << "\nReservation   id:  "<<GetReservationID();
            cout << "\nNumber of nights:  "<<GetNumberOfNights();
            cout << "\n****************************************************************" << endl;
        }


        
        void SetRequest(Guests *x)
        {
            GuestsForRequest = x;
        }
       

        Guests* GetRequest()
        {
            return GuestsForRequest;
        }
        

        int GetReservationID()
        {
            return ReservationID;
        }
        

        int GetNumberOfNights()
        {
            return NumberOfNights;
        }

        void SetNumberOfNights(int x)
        {
            NumberOfNights = x;
        }
/*

        void PrintRequestDetail()
        {
            Guests t = *GetRequest();
            cout<<"*******************************************************************" << endl;

            cout << "Check in date: " ;
            t.GetCheckInDate();
            cout << "Check out date: ";
            t.GetCheckOutDate();
            t.
        }

*/
        
    protected:

    private:
        Guests *GuestsForRequest;
        int ReservationID;
        int NumberOfNights;
};

#endif // GUESTS_RES_REQUEST_H
