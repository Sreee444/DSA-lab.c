#include<stdio.h>
int top =-1,Max, ch,A[100];
void push();
void pop();
void Display();
 void main()
  {
    printf("Enter the size of the Array : ");
    scanf("%d" ,&Max);
    do{
        printf("Stack Operations\n");
        printf("--------------------\n");
        printf("1 : PUSH\n");
        printf("2 : POP\n");
        printf("3 : DISPLAY\n");
        printf("4 : EXIT\n");
        printf("Enter your choice : ");
        scanf("%d" ,&ch);

        switch (ch)
        {
        case 1:
            push();
            break;
        case 2:
            pop();
            break;
        case 3 :
            Display();
            break;
        case 4 :
            printf("Exited ");
            break;
        default:
            printf("Choose a valid option \n");
            break;
        }
    }while (ch !=4);
    
  }

void push()
 {
    int value;
    printf("Enter the value to be pushed : ");
    scanf("%d" ,&value);
    if(top == Max-1)
    {
        printf("Stack is full \n");
    }
   else{
    top++;
    A[top] = value;
   }
 }

void pop()
 {
    if(top == -1){
        printf("Stack is empty \n");
    }
    else{
        printf("The deleted element is %d \n",A[top]);
        top--;
    }
 }

void Display()
 {
    if(top == -1)
    {
        printf("Stack is empty \n");
    }
    else{
        printf("Stack elements are : ");
        for(int i =top;i>=0;i--)
        {
            printf("%d " ,A[i]);
        }
    }
 }