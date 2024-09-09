#include<stdio.h>
int top=-1,Max,opt=-1,i,item,value,A[20];
void Push();
void Pop();
void Display();
  void main()
    {
      printf("Enter the size of the stack : ");
      scanf("%d",&Max);
      while(opt!=4)
       {
         printf("1 : PUSH\n");
         printf("2 : POP\n");
         printf("3 : DISPLAY\n");
         printf("4 : EXIT\n");
         printf("Choose and option : ");
         scanf("%d",&opt);

         switch (opt)
          {
           case 1 :
               Push();
              break;
           case 2 :
                Pop();
               break;
           case 3 :
                 Display();
                break;
           case 4 :
                printf("     EXITED    ");
                break;
           default:
                printf("Enter a valid option\n");
                
          }
        }
    }
  void Push()
   {
    if(top==Max-1)
     {
      printf("STACK OVERFLOW\n");
     }
    else
     {
      printf("Enter the number to add : ");
      scanf("%d" ,&item);
      top++;
      A[top]=item;
     }
   }
   void Pop()
   {
    if(top==-1)
     {
      printf("STACK UNDERFLOW\n");
     }
    else
     {
       value = A[top] ;
      top--;
      printf("THe deleted number is %d\n" ,value);
     }
   }
   void Display()
   {
    if(top==-1)
     {
      printf("STACK UNDERFLOW\n");
     }
    else
     {
      printf("The stack elements are : ");
      for(i=Max-1;i>=0;i--)
       {
        printf(" %d " ,A[i]);
       }printf("\n");
     }
   }