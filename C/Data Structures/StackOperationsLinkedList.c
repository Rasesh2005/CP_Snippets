/* 
------------------------------------------------------------------------------------------------
USERNAME: MNAIWRIT52
DESCRIPTION: THIS PROGRAM CARRIES OUT COMMON STACK OPERATIONS
DATE: 1/10/2021
------------------------------------------------------------------------------------------------
*/

#include<stdio.h>
#include<stdlib.h>

typedef struct node
{
    int data;
    struct node *next;
}node;

node *top = NULL;

void pushToStack();
void popFromStack();
void displayStackTop();

int main(){
    int ch;

    do
    {
        printf("\n1. Push\n2. Pop\n3. Display Stack Top\n4. Exit\n");
        printf("Enter your choice: ");
        scanf("%d",&ch);

        switch (ch)
        {
        case 1:
            pushToStack();
            break;
        
        case 2:
            popFromStack();
            break;

        case 3:
            displayStackTop();
            break;

        default:
            printf("\nStack elements cleared...\nStack memory deleted!\nPress any key to continue...\n");
        }
    } while (ch != 4);
}

void pushToStack(){
    int val;
    node *temp = (node *)malloc(sizeof(node));
    printf("Enter element: ");
    scanf("%d",&val);

    temp->data = val;
    temp->next = NULL;
    
    temp->next = top;
    top = temp;
    printf("\n\'%d\' Pushed\n",val);
}

void popFromStack(){
    node *del;
    if (top == NULL)
        printf("Stack Empty\n");
    else{
        del = top;
        top = top->next;
        printf("\n\'%d\' Popped\n",del->data);
        free(del);
    }
}

void displayStackTop(){
    if (top == NULL)
        printf("Stack Empty\n");
    else
        printf("->%d\n",top->data);
}