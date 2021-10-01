/* 
------------------------------------------------------------------------------------------------
USERNAME: ABHILASHKPY
DESCRIPTION: THIS IS A MENU-DRIVEN PROGRAM TO PERFORM STACK OPERATIONS USING ARRAYS
DATE: 1/10/2021
------------------------------------------------------------------------------------------------
*/


#include<stdio.h>
#include<iostream>

using namespace std;

class myStack
{
int top;
int a[100];
public:
    myStack()
{
       top=-1;
}

    void push();
    void pop();
    void view();
    int isStackEmpty();
    int isStackFull();
};

int myStack::isStackEmpty()
{
    return (top==(-1)?1:0);
}

int myStack::isStackFull()
{
    return ( top == 50 ? 1 : 0 );
}

void myStack::push()
{
    if(isStackFull())
    {
        cout<<"\nSTACK OVERFLOW: FULL!!!";
    }
    else
    {
        int i;
        cout<<"\nEnter an element :: ";
        cin>>i;
        ++top;
        array[top]=i;
        cout<<"\nSUCCESSFULLY INSERTED\n";
    }
}

void myStack::pop()
{
    int num;
    if(isStackEmpty())
    {
            cout<<"\n STACK IS EMPTY [ UNDERFLOW ] ";
    }
    else
    {
    cout<<"\nDeleted item is : "<<array[top]<<"\n";
    top--;
    }
}

void myStack::view()
{
    if(isStackEmpty())
    {
            cout<<"\n STACK IS EMPTY ";
    }
    else
    {
    cout<<"\nSTACK :\n";
    for(int i=top;i>=0;i--)
    {
            cout<<array[i]<<"\n";
    }
    }
}


int main()
{
    myStack sss;
    int option;
    option=0;
    while(option!=4)
    {
        cout<<"\n1. Push\n";
        cout<<"2. Pop\n";
        cout<<"3. Display\n";
        cout<<"4. Quit\n";
        cout<<"\nEnter your Choice :: ";
        cin>>option;

        switch(option)
        {
            case 1:
                sss.push();
                break;

            case 2:
                sss.pop();
                break;

            case 3:
                sss.view();
                break;

            case 4:
                option=4;
                cout<<"\nPress any key to Continue!! ";
                break;

            default:
                cout<<"\nInvalid SELECTION \n";
                break;
        }
    }

    return 0;
}





