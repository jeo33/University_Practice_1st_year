#ifndef RESERVATION_MANAGER_H
#define RESERVATION_MANAGER_H
#include "Guests_Res_Request.h"
#include <iomanip>

class Reservation_Manager
{
public:
    Reservation_Manager();
    virtual ~Reservation_Manager();
    
    int CheckEmpty(int x, int y)
    {
        return InformationTable[x][y];
    }

    void SetTable(int x, int y, int z)
    {
        InformationTable[x][y] = z;
    }

    int GetTable(int x, int y)
    {
        return InformationTable[x][y];
    }


    Guests_Res_Request* GetRequest()
    {
        return Arr;
    }

    void SetRequest(Guests_Res_Request* t)
    {
        Arr = t;
    }
    /*
    bool VarifiyRequest(Guests_Res_Request* t)
      {
          if ()
          {
              return true;
          }
          else return false;
      }

    */


    bool checkEmpty(Guests_Res_Request* t)
    {

        int nights = t->GetNumberOfNights();

        int x = (t->GetRequest())->GetCheckInDay();
        int flag = 0;
        int id = t->GetReservationID();
        
        int Rnumber=0;
        for (int colum = 0;colum < 20;colum++)
        {
            for (int row = x - 1;row < x - 1+nights;row++)
            {
                if (GetTable(row, colum) == 0)
                {
                    flag++;
                    
                }
                else
                {
                    flag = 0;
                    continue;
                }
            }
            if (flag == nights)
            {
                Rnumber = colum+1;
                colum = 20;
            }
            else flag = 0;
        }
        

        if (flag == nights)
        {
            (t->GetRequest())->SetRoomNumber(Rnumber);
                {  
            
                for (int row = x - 1;row < x + nights;row++)
                    {
                        SetTable(row, Rnumber - 1, id);
                    }

                }
                cout << "\n\t***********************************" << endl;
                cout <<   "\t*  Information collected !!!!!!!  *" << endl;
                cout <<   "\t***********************************\n" << endl;
            cout << "Request has been done successfully , your reservation id is:"<<id << endl;
            return true;
        }


        else
        {
            (t->id)--;
            DeleteQuest(t);
            cout << "\n\t***********************************" << endl;
            cout <<   "\t*       Room is full !!!!!!!      *" << endl;
            cout <<   "\t***********************************\n" << endl;
            cout << "\n room is full , request deleted" << endl;
            return false;
        }
    }

    void print()
    {
        cout << "\n     |";
        for (int x = 0;x < 20;x++)
        {
            cout << setw(2) << x + 1 << "  |";
        }
        cout << "\n----------------------------------------------------------------------------------------------------------\n";
        for (int i = 0;i < 7;i++)
        {
            cout << "Mar" << i + 1 << " |";
            for (int j = 0; j < 20;j++)
            {

                if (GetTable(i,j)!= 0) cout << setw(4) << GetTable(i, j) << "|";
                else cout << "    |";
            }
            cout << "\n----------------------------------------------------------------------------------------------------------\n";
        }
    }


   




    void DeleteQuest(Guests_Res_Request* Arr)
    {
        Guests* g = Arr->GetRequest();
        delete g;
        delete Arr;
    }







protected:

private:
    const int max_no_of_nights = 7;
    const int no_of_rooms = 20;
    Guests_Res_Request* Arr;
    int InformationTable[7][20];
};

#endif // RESERVATION_MANAGER_H
