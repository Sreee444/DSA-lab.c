#include<stdio.h>
void main()
 {
    int Size,X,flag = 0,i,mid,left ,right,index;
    printf("Enter the size of the Array : ");
    scanf("%d" ,&Size);
    int A[Size];
    printf("Enter the Elements :\n");
    for ( i = 0; i < Size; i++)
    {
        scanf("%d",&A[i]);
    }
    printf("The Array elements are : ");
    for ( i = 0; i < Size; i++)
    {
        printf(" %d ",A[i]);
    }
    left=0;
    right = Size-1;
    printf("\nEnter the element to search : ");
    scanf("%d",&X);

     while(left<right) 
       {
        mid = (left +right)/2;
         if(X == A[mid])
          {
            flag = 1;
            index =mid;
            break;
          }
        else if (X > A[mid])
         {
            left = mid +1;
         }
       else {
         right = mid -1;
        }
       }
    if(flag == 1) {
        printf("The element found at %d position : " ,index+1);
    }
else 
 {
    printf("elemet not found");
 }
 }