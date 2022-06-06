/*
Name of Program: Stack Implementation Using Array.
Description: This program is a basic implementation of STACK concept using array with the operations of stack.
Author: Rajesh Chaudhari.
*/

#include<stdio.h>
#include<conio.h>

#define STACK_SIZE 5   //Size of the stack
int STACK[STACK_SIZE];  //Array declaration of the stack
int TOP = -1;   //Pointer for the stack

void push();    //Function to insert an element at the top of the stack
void pop();     //Function to delete an element from the top of the stack
void peek();    //Function to get the top element of the stack
void show();    //Function to display the contents of the stack

void main()
{
    int choice;

    do
    {
        printf("\n\n\t Working with Stack");
        printf("\n\t 1. Push");
        printf("\n\t 2. Pop");
        printf("\n\t 3. Peek");
        printf("\n\t 4. Show");
        printf("\n\t 5. Exit");

        printf("\n\n\t Enter your choice: ");
        scanf("%d",&choice);

        switch(choice)
        {
            case 1:
                push();
            break;
            
            case 2:
                pop();
            break;
            
            case 3:
                peek();
            break;

            case 4:
                show();
            break;

            case 5:
                printf("\n\t Thank you for using stack.");
            break;

            default:
                printf("\n\t Invalid choice!!");

        }
        printf("\n\t Press any key to continue.");
        getch();

    } while (choice != 5);
    
    printf("\n\t End of program");

}

void push()
{
    if(TOP == STACK_SIZE-1)     //If TOP pointer is equal to (STACK_SIZE - 1) then the stack is overflow and we can't push more elements in it
    {
        printf("\n\t Stack is Overflow");
    }
    else
    {
        int item;
        printf("\n\t Enter the element to push: ");
        scanf("%d",&item);

        TOP++;

        STACK[TOP] = item;

        printf("\n\t %d successfully pushed into the stack.",item);

    }
}


void pop()
{
    if(TOP == -1)       //If TOP pointer is equal to -1 then the stack is underflow i.e. empty and we can't delete elements from the stack
    {
        printf("\n\t Stack is Underflow");
    }
    else
    {
        int item = STACK[TOP];

        TOP--;

        printf("\n\t %d successfully popped from the stack.",item);
    }
}

void peek()
{
    if(TOP == -1)
    {
        printf("\n\t Stack is Underflow");
    }
    else
    {
        printf("\n\t %d is the element at the top of stack.",STACK[TOP]);
    }
}

void show()
{
    if(TOP == -1)
    {
        printf("\n\t Stack is Underflow");
    }
    else
    {
        printf("\n\t The Stack elements are: ");
        for(int i=TOP; i>=0; i--)
        {
            printf("\n\t%5d",STACK[i]);
        }
    }
}
