#include <iostream>
#include "Date.h"
#include "Guests.h"
#include "Guests_Res_Request.h"
#include "information.h"
#include "Reservation_Manager.h"
#include<vector>

using namespace std;
int Guests_Res_Request::id = 1;
int main()
{   
    Reservation_Manager n;
    vector<Guests_Res_Request*> AllRequest;
    int keyLoop=1;
    int jj = 0;
    
   
    
    while (keyLoop)
    {
        cout << "\n*********************************************" << endl;
        cout << "\n\nWelcom to Cplusplus Hotel Reservation System !!\n" << endl;
        cout << "1.Check current reservation table\n" << endl;
        cout << "2.Make a new resevation\n" << endl;
        cout << "3.Check All success request by request id\n" << endl;
        cout << "4.Quit\n" << endl;
        cout << "\n*********************************************" << endl;

        int commandKey;
        cout << "Please enter the number to select the option :";
        cin >> commandKey;
        cout << endl;
        if (commandKey == 1)
        {
            n.print();
        }
        else if (commandKey == 2)
        {   
            Guests_Res_Request *x=new Guests_Res_Request();
            x->SetGuests_Same_Room();
            if (n.checkEmpty(x))
            {   
                AllRequest.push_back(x);
                x->GetGuests_Same_Room();
                n.print();
            }
        }
           

        else if (commandKey == 3)
        {   
            cout << "please enter the request id: (current list size is :" << AllRequest.size() <<")" << endl;
            int checkById;
            cin >> checkById;
            if ( AllRequest.empty())
            {
                cout << "Reservation list is empty, please add new reservation." << endl;
                break;
            }
            else if (!AllRequest.empty() &&(checkById > AllRequest.size() || checkById < 1))cout << "input not valid "<< endl;

            else if(0<checkById && checkById< AllRequest.size()+1)
            {
                Guests_Res_Request* RequestcheckById = new Guests_Res_Request();
                RequestcheckById = AllRequest.at(checkById - 1);
                RequestcheckById->GetGuests_Same_Room();
                (RequestcheckById->id)--;
            }
           
        }

        else if (commandKey == 4)
        {  keyLoop = 0;
            break;
        }

    }
    



 
    return 0;
}
