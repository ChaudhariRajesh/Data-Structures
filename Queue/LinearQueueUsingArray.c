/*
Name of Program: Linear Queue Implementation Using Array.
Description: This is a basic implementation of the linear queue with all its operations.
Author: Rajesh Chaudhari.
Language: 'C'.
*/

#include<stdio.h>
#include<conio.h>

#define QUEUE_SIZE 3    //Defining the size of the queue
int QUEUE[QUEUE_SIZE];  //Declartion of the integer type queue using array
int FRONT = -1;     //Initialiazation of the FRONT pointer with -1. It will be used to delete an element from the queue
int REAR = -1;      //Initialiazation of the REAR pointer with -1. It will be used to insert an element to the queue

void enqueue();     //Function to insert an element at the REAR end of the queue
void dequeue();     //Function to insert an element at the FRONT end of the queue
void show();        //Function to show the contents of the queue

void main()
{
    int choice;

    do
    {
        printf("\n\n\t Working with Linear Queue");
        printf("\n\t 1. Enqueue");
        printf("\n\t 2. Dequque");
        printf("\n\t 3. Show");
        printf("\n\t 4. Exit");

        printf("\n\n\t Enter your choice: ");
        scanf("%d",&choice);

        switch(choice)
        {
            case 1:
                enqueue();
            break;
            
            case 2:
                dequeue();
            break;
            
            case 3:
                show();
            break;

            case 4:
                printf("\n\t Thank you for using stack.");
            break;

            default:
                printf("\n\t Invalid choice!!");

        }
        printf("\n\t Press any key to continue.");
        getch();

    } while (choice != 4);
    
    printf("\n\t End of program");

}

void enqueue()
{
    if(REAR == QUEUE_SIZE-1)      //This condition checks whether the queue is full or not
    {
        printf("\n\t Queue is Overflow.");
    }
    else
    {
        int item;
        printf("\n\t Enter the element to insert: ");
        scanf("%d",&item);

        REAR++;

        QUEUE[REAR] = item;

        if(FRONT == -1)     //For the first insertion in the queue, we need to increment FRONT pointer also
        {
            FRONT++;
        }

        printf("\n\t %d is successfully inserted.",item);
    }
}

void dequeue()
{
    if(FRONT == -1)     //This condition checks whether the queue is empty or not
    {
        printf("\n\t Queue is Underflow");
    }
    else
    {
        int item = QUEUE[FRONT];

        if(FRONT == REAR)       //When FRONT = REAR then, there is only one element left in the queue, so after its deletion the FRONT and REAR should be set the -1
        {
            FRONT = -1;
            REAR = -1;
        }
        else       // If more that one elements are present then only increment the FRONT pointer to remove the element
        {
            FRONT++;
        }

        printf("\n\t %d %d %d is successfully deleted.",item,FRONT,REAR);


    }
}

void show()
{
    if(FRONT == -1)
    {
        printf("\n\t Queue is Underflow");
    }
    else
    {
        printf("\n\t The Queue elements are: \n\t");

        for(int i=FRONT; i<=REAR; i++)
        {
            printf("%5d",QUEUE[i]);
        }
    }
}
