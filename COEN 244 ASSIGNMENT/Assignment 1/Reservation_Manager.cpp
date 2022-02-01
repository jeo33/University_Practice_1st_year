#include "Reservation_Manager.h"
#include<iomanip>
Reservation_Manager::Reservation_Manager()
{
    for (int colum = 0;colum < 20;colum++)
    {
        for (int row = 0;row < 7 ;row++)
        {
            InformationTable[row][colum] = 0;
        }
    }
}



Reservation_Manager::~Reservation_Manager()
{
    //dtor
}
