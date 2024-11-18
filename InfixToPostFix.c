# include <stdio.h>
# include<stdlib.h>
#include<string.h>
# include <ctype.h>

void push(char);
char pop();
int precidence(char);
 char A[20],P[20],S[20];
 int top =-1,j=0,i;
void main()
 {
    printf("Enter the infix Expression : ");
    scanf("%s",A);
    printf("The infix Expression is : ");
    printf("%s",A);
    int n = strlen(A);
    

    for ( i = 0; i < n; i++)
    {
        if (isalnum(A[i]))
        {
            P[j] =A[i];
            j++;
        }
        else if (A[i] == '(')
        {
            push(A[i]);
        }
        else if (A[i] == ')')
        {
            while (S[top] != '(')
            {
                P[j] =pop();
                j++;
            }
            pop();
        }
      else
      {
      while ((top !=-1) &&(precidence(A[i]) <= precidence(S[top])))
       {
        P[j]  = pop();
        j++;
       }
     push(A[i]); 
     }
  }
  while (top != -1)
  {
    P[j] = pop();
    j++;
  }
P[j] ='\0';
  printf("\nThe PostFix Expression : %s\n",P);
}

void push(char x)
 {
    top ++;
    S[top] =x;
 }

 char pop()
  {
    char item ;
    item = S[top];
    top --;
    return item;
  }

int precidence(char x)
 {
    switch(x)
     {
        case '^' : return 3;
        case '*' : 
        case '/' : return 2;
        case '+' : 
        case '-' : return 1;
        default  : return 0;
     }
 }