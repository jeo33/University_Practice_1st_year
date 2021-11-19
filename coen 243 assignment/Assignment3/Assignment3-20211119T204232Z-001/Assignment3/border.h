#ifndef BORDER_H
#define BORDER_H
#include<vector>
#include<iostream>
using namespace std;
class border
{
    public:
        border();
        virtual ~border();
        void printString();
        int border_size=0;
        vector<string> Bian;
        void print(int x);

    protected:

    private:
};

#endif // BORDER_H
