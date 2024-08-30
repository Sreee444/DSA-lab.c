#include <stdio.h>
struct polynomial
 {
  int coeff;
  int expo;
 }poly[100];
void main()
{
  int i,j,x=1,n;
  printf("Enter the degree of the polynomial : \n");
  scanf("%d", &n);
  for(i=0;i<n;i++)
   {
     printf("Enter the %d coefficient of the polynomial : ",i+1);
     scanf("%d",&poly[i].coeff);
     printf("Enter the %d exponent of the polynomial : ",i+1);
     scanf("%d",&poly[i].expo);
   }
   for(i=0;i<n;i++)
   {
     if(poly[i].expo<poly[i+1].expo)
      {
        x=0;
      }
   }
   if(x==0)
     {
      printf("Entered in incorrect form \n");
     }
    else
     {
     printf("The polynomial representation is :\n");
     for(i=0;i<n;i++)
      {
        printf("(%dX^%d)",poly[i].coeff,poly[i].expo);
         if(i < n-1)
         {
           printf(" + "); 
         } 
      }
     } 
}
