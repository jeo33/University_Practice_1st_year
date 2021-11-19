#ifndef NUMBER_H
#define NUMBER_H
#include<vector>
#include<iostream>
using namespace std;

class number
{
    public:
        number();
        virtual ~number();
        vector<int> NumberList;
        vector<vector<int>> inputNum();
        void get2dArray();
        int counts;
        int width;
        vector<vector<int>> numbers;



    protected:

    private:
};

#endif // NUMBER_H
