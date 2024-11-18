#include<stdio.h>
int front = -1, rear =-1, Size,A[20],ch;
void Enqueue();
void Dequeue();
void Display();

void main()
 {
    printf("Enter the Size of the Queue : ");
    scanf("%d",&Size);
    do
    {
        printf("\nQueue Operations \n");
        printf("------------------\n");
        printf("1.Enqueue\n");
        printf("2.Dequeue\n");
        printf("3.Display\n");
        printf("4.Exit\n");
        printf("Enter your choice : ");
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
              printf("\nExited");
              break;
            default :
              printf("Choose a valid option \n");
              break;
         }
    } while (ch != 4);
    
 }

 void Enqueue()
  {
    int value;
    if(rear == Size-1)
     {
         printf("Queue overflow\n");
     }
     else if(front == -1 && rear == -1)
      {
         front ++;
         rear ++;
        printf("Enter the element to add : ");
        scanf("%d",&A[rear]);
        printf("The element is added to the queue \n");
      }
    else {
        rear ++;
        printf("Enter the element to add : ");
        scanf("%d",&A[rear]);
    }
  }

void Dequeue()
 {
   if(front == -1 || front >rear)
    {
      printf("Queue underflow\n");
    }
   else
    {
      printf("The deleted element is = %d \n",A[front]);
      front ++;
    }
 }

void Display()
 {
   if(front == -1 || front >rear)
    {
      printf("Queue underflow\n");
    }
    else
     {
      printf("The Queue elements are : [ ");
      for(int i = front;i<=rear;i++)
       {
        printf(" %d ",A[i]);
       }
       printf(" ]\n");
     }
 }