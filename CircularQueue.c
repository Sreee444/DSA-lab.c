#include <stdio.h>
int rear =-1, front =-1,Size,A[100];
void Enqueue();
void Dequeue();
void Display();
 void main()
  {
     int ch=0;
     printf("Enter the size of the Queue : ");
     scanf("%d",&Size);
     do
     {
        printf("\nCircular Queue Operations \n");
        printf("-------------------------\n");
        printf("1 : Enqueue\n");
        printf("2 : Dequeue\n");
        printf("3 : Display\n");
        printf("4 : Exit\n");
        printf("Choose an operation : ");
        scanf("%d",&ch);

        switch(ch) 
           {
            case 1:
               Enqueue();
               break;
            case 2:
               Dequeue();
               break;
            case 3:
               Display();
               break;
            case 4:
               printf("Exited \n");
               break;
            default:
              printf("Choose a valid operation \n");
              break;
        }
     } while (ch !=4);
     
  }

void Enqueue()
 {
    if (rear == -1 && front == -1)
    {
        rear++;
        front++;
        printf("Enter the element to add : ");
        scanf("%d",&A[rear]);
        printf("The element added Successfully in %d position \n",rear);
    }
   else if ((rear+1)%Size == front)
   {
    printf("Queue is Full\n");
   }
   else{
     rear = (rear+1)%Size;
        printf("Enter the element to add : ");
        scanf("%d",&A[rear]);
        printf("The element added Successfully in %d position \n",rear);
   } 
 }

void Dequeue()
  {
    if (front == -1 && rear ==-1)
    {
        printf("Queue is empty \n");
    }
    else if (front == rear)
    {
        printf("The deleted element is : %d ",A[front]);
        front =-1;
        rear = -1;
    }
   else 
    {
        printf("The deleted element is : %d ",A[front]);
        front = (front+1)%Size ;
    } 
  }

void Display()
 {
   if (front == -1 && rear == -1)
     {
        printf("Queue is empty \n");
     }
    else 
      {
        printf("The Queue Elements are : [ ");
        for (int  i = front; i != rear; i = (i+1)%Size)
        {
            printf(" %d ",A[i]);
        }
        printf(" %d ]\n",A[rear]);
      }
 }