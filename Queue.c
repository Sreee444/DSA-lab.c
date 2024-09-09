#include<stdio.h>
int A[100],front=-1,rear=-1,Max,choice;
void Enqueue();
void Dequeue();
void Display();
   void main()
    {
        printf("Enter the size of the Queue : ");
        scanf("%d",&Max);
        while(choice !=4)
         {
            printf("1 : Enqueue\n");
            printf("2 : Dequeue\n");
            printf("3 : Display\n");
            printf("4 : Exit\n");
            printf("Choose an operation : ");
            scanf("%d",&choice); 

            switch (choice)
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
               printf("EXITED\n");
               break;
            default:
               printf("Enter a valid option\n");
                break;
            }
            
         }
    }

  void Enqueue()
   {
    int item;
    if(rear==Max-1)
     {
        printf("QUEUE IS FULL\n");
     }
    else 
     {
       if(front ==-1)
        {
         front=0;
        }
        rear++;
        printf("Enter the number to be added : ");
        scanf("%d",&item);
        A[rear]=item;
     }
   }

  void Dequeue()
   {
     int value;
     if(front==-1 || front > rear)
      {
        printf("QUEUE IS EMPTY\n");
      }
     else 
      {
        value =A[front];
        printf("The deleted element is %d\n", value);
        front++;
      }
   }

  void Display()
   {
    int i;
    if(front==-1 || front > rear)
     {
        printf("QUEUE IS EMPTY\n");
     }
    else
     {
       printf("The Queue elements are : ");
        for(i=front;i<=rear;i++)
         {
            printf("%d ",A[i]);
         }
         printf("\n");
     }
   }  