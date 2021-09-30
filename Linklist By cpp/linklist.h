#ifndef LINKLIST_H
#define LINKLIST_H
#include <iostream>
#include <cmath>
#include <cstddef>
using namespace std;

class linklist
{
    public:
        linklist();
        struct node
            {
                int data;
                node *next=NULL;
            };
         node *head=NULL;
         node *tail=NULL;
          void insert(int x);
          void print();
          void insertAtCertain(int value,int where);
          void deleteelement(int p);
        virtual ~linklist();

    protected:

    private:
};

#endif // LINKLIST_H
