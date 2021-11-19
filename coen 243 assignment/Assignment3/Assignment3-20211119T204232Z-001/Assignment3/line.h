#ifndef LINE_H
#define LINE_H
#include<vector>
#include<string>
using namespace std;
class line
{
    public:


        int column;
        int row;
        std::vector<string> Combined;
        std::vector<string> Combined_Num;
         line();
        line(int x,int y)
        {
            row=x;
            column=y;
        };
        void firstLine();
        void secondLine(std::vector<vector<int>> arr);
        void lastLine();
        virtual ~line();
        void setBoth(int x);

};

#endif // LINE_H
