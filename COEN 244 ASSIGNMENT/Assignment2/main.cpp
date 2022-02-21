
#include <iostream>
#include<string>
#include"Textbook.h"
#include"Article.h"
#include"Reference.h"
#include"ReferenceManager.h"
#include<string>
#include<iomanip>
using namespace std;

int main()
{
    int keyLoop = 1;
    
    cout << "\n\nWelcom to Reference manage System !!          \n" << endl;
    cout << "\n\nIn order to use the system,please to enter the size of your Reference\n" << endl;
    
    int size;
    cin >> size;
    ReferenceManager YourReference(size);

    while (keyLoop)
    {
        cout << "\n*********************************************" << endl;
        cout << "\n\nWelcom to Reference manage System !!          \n" << endl;
        cout << "1.Add a reference to you reference list                        \n" << endl;
        cout << "2.Delete a reference from you reference list by position       \n" << endl;
        cout << "3.Search your references by id\n" << endl;
        cout << "4.Search your id by position\n" << endl;
        cout << "5.Check your reference size and show your listing \n" << endl;
        cout << "6.Quit\n" << endl;
        cout << "\n*********************************************" << endl;
        
        int commandKey;
        cout << "Please enter the number to select the option :";
        cin >> commandKey;
        cout << endl;
        /*
        use this to print the menu
        */
        if (commandKey == 1&&((YourReference.getMaxsize() - YourReference.GetCapacity()) != 0))
        {
                 
            cout << "\n\nSelect the reference type          \n" << endl;
            cout << "1.Article\n" << endl;
            cout << "2.Book\n" << endl;
            cout << "3.TextBook\n" << endl;
           
            int ReferenceType;
            cin >> ReferenceType;
            switch (ReferenceType)
            {
            case 1:
            { 
                {
                    string tittle, author,information;
                    int year, startpage, endpage;
                    cout << "Please enter the tittle: " ;
                    cin >> tittle;
                    cout << "Please enter the author";
                    cin >> author;
                    cout << "Please enter the year" ;
                    cin >> year;
                    cout << "Please enter the startpage" ;
                    cin >> startpage;
                    cout << "Please enter the endpage";
                    cin >> endpage;
                    cout << "Please enter the information" ;
                    cin >> information;
                   
                    Reference* a = new Article(tittle, author, information, year, startpage, endpage);
                    a->print();
                    if (YourReference.add(*a)) cout << "successful added the reference" << endl;
                    else cout << "Not successful added the reference" << endl;
                    
                }
                break;
            }
              
            case 2:
                
            {   
                string tittle, author, publisher;
                int year, numberOfPages;
                cout << "Please enter the tittle";
                cin >> tittle;
                cout << "Please enter the author";
                cin >> author;
                cout << "Please enter the year";
                cin >> year;
                cout << "Please enter the numberOfPages";
                cin >> numberOfPages;
                cout << "Please enter the publisher";
                cin >> publisher;

                Reference* a = new Book(tittle, author, publisher, year, numberOfPages);
                a->print();
                if (YourReference.add(*a)) cout << "successful added the reference" << endl;
                else cout << "Not successful added the reference" << endl;
                break;
            }
            case 3:
            {
                string tittle, author, URL, publisher;
                int year, numberOfPages;
                cout << "Please enter the tittle";
                cin >> tittle;
                cout << "Please enter the author";
                cin >> author;
                cout << "Please enter the year";
                cin >> year;
                cout << "Please enter the numberOfPages";
                cin >> numberOfPages;
                cout << "Please enter the publisher";
                cin >> publisher;
                cout << "Please enter the URL";
                cin >> URL;

                Reference* a = new TextBook( tittle,   author,  URL,  year,  publisher,  numberOfPages);
                a->print();
                if (YourReference.add(*a)) cout << "successful added the reference" << endl;
                else cout << "Not successful added the reference" << endl;
                break;
            }
             
            default:
            {
                cout << "\nNo options selected back to main menu" << endl;
                break;
            }

            }
        }
        /*
        When the list is not full add the references
        */
        else if (commandKey == 1&& ((YourReference.getMaxsize() - YourReference.GetCapacity()) == 0))
        {
        
            cout << "Your list is full, please delete some of your references" << endl;
        }
        /*
        When the list is  full back to menu
        */
        else if (commandKey == 2)
        {

            int x;

            do
            {
                cout << "This number should be between 0 and "<< YourReference.GetCapacity() -1<< endl;
                cin >> x;
            } while (x<0 || x>=YourReference.GetCapacity());
            if (YourReference.deleteElement(x))cout << "successful deleted selected element<<endl;";
            else cout << "not a valid position" << endl;
        }
        /*
        Delete a reference from you reference list by position
        */

        else if (commandKey == 3)
        {
            int x;
            do
            {
                
                cin >> x;
            } while (!YourReference.search(x));
            YourReference.getReferenceByid(x)->print();

        }
        /*
        Search your references by id
        */

        else if (commandKey == 4)
        {
        int x;

        do
        {
            cout << "This number should be between 0 and " << YourReference.GetCapacity()-1 << endl;
            cin >> x;
        } while (x<0 || x>YourReference.GetCapacity());
        cout<<YourReference.get(x)<<endl;
        YourReference.getReferenceByPos(x)->print();
        }
        /*
        Search your id by position
        */

        else if (commandKey == 5)
        {
            cout << "Here is your list maximum capacity "<<YourReference.getMaxsize() << endl;
            cout << "Here is your list current capacity " << YourReference.GetCapacity() << endl;
            cout << "You can add " << YourReference.getMaxsize()- YourReference.GetCapacity()<<" more references to your list" << endl;
            cout << "+------+";
            for (int i = 0; i < YourReference.GetCapacity(); i++)
            {
                cout << "+------";
            }
            cout << "+" << endl;
            cout << "| POS  ";
            for (int i = 0; i < YourReference.GetCapacity(); i++)
            {
                cout << "|  " << setw(2) << i << "  ";
            }
            cout << "|" << endl;

            cout << "+------+";
            for (int i = 0; i < YourReference.GetCapacity(); i++)
            {
                cout << "+------";
            }
            cout << "+" << endl;

            cout << "|  id  ";
            for (int i = 0; i < YourReference.GetCapacity(); i++)
            {
                cout<<"|  "<<setw(2) <<YourReference.getReferenceByPos(i)->getid()<<"  ";
            }
            cout<<"|" << endl;

            cout << "+------+";
            for (int i = 0; i < YourReference.GetCapacity(); i++)
            {
                cout << "+------";
            }
            cout << "+" << endl;
        }
        /*
        Check your reference size and show your listing
        mainly this part reponsible for drawing table
        */
        else if (commandKey == 6)
        {
            keyLoop = 0;
            break;
        }
        /*
        quit the loop to quit the program
        */
        else
        {
        cout << "please enter your option between 1 and 6" << endl;
         }
         /*
        default
        */

    }
}
