#include<stdio.h>
 struct PolynomialRepresentation
 {
    int coeff;
    int expo;
 }poly[100];

 void main()
  {
    int i,j,Size;
    printf("Enter the degree of the polybomial : ");
    scanf("%d",&Size);
    for(i =0;i<Size;i++)
     {
        printf("Enter the %d coefficent of the polynomial : ",i+1);
        scanf("%d" , &poly[i].coeff);
        printf("Enter the %d Exponent of the polynomial : ",i+1);
        scanf("%d" , &poly[i].expo);
     }

    printf("The polynomial Representation is : \n");
    for ( i = 0; i < Size; i++)
    {
        printf("( %d x^%d )",poly[i].coeff,poly[i].expo);
        if(i<Size-1)
         {
            printf(" + ");
         }
    }
    
  }
 
 