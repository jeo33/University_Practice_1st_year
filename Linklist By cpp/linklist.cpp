#include "linklist.h"
#include <iostream>
#include <cmath>
#include <cstddef>
using namespace std;
linklist::linklist()
{
    //ctor
}

void linklist:: insert(int x)
    {
        node *temp=new struct node;
            temp->data=x;
            temp->next=head;
            head=temp;
    };

void linklist:: print()
    {
        node *temp=new struct node;
        temp=head;
        while(temp!=NULL)
        {
            cout<<temp->data<<" ";
            temp=temp->next;
        }

    };

void linklist:: insertAtCertain(int value,int where)
    {
        node *temp1=new struct node;
        node *temp2=new struct node;
        temp1->data=value;
        temp1->next=NULL;
        if (where==1)
        {
            temp1->next=head;
            head=temp1;
        }
        else
        {
            temp2=head;
        for(int i=0;i<=where-1;i++)
        {
            temp2=temp2->next;
        }
        temp1->next=temp2->next;
        temp2->next=temp1;
        }
    }
void linklist:: deleteelement(int p)
    {
        node *temp1=new struct node;
        node *temp2=new struct node;
         if (p==1)
        {   temp1=head;
            head=temp1->next;
        }
        else
        {
            temp1=head;
        for(int i=0;i<=p-3;i++)
        {
            temp1=temp1->next;
        }
            temp2=temp1->next;
            temp1->next=temp2->next;
        }
    }




linklist::~linklist()
{
    //dtor
}
