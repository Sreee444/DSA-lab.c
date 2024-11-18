#include<stdio.h>
void main()
{
   int Size =0,X,i,index,count =0;
   printf("Enter the Size of the Array : ");
   scanf("%d" ,&Size);
   int A[Size];

   printf("Enter the elemets : ");
   for(i=0;i<Size;i++)
    {
      scanf("%d",&A[i]);
    }
    
 printf("The Array elemets are : ");
   for(i=0;i<Size;i++)
    {
      printf (" %d ",A[i]);
    }
    printf("\n");
   printf("Enter the element to search : ");
   scanf("%d",&X);
   for(i=0;i<Size;i++)
    {
     if(X==A[i])
     {
        
        printf("The element found at %d position\n" ,i+1);
        count ++;
     }
    
    }
   if(count >0){
    printf("The element found %d times\n",count);
   }
   else{
    printf("Element not found");
   }
}