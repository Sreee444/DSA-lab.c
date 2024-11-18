#include <stdio.h>
 void main()
  {
    int i,j,Size,temp;
    printf("Enter the Size of the Array : ");
    scanf("%d",&Size);
    int A[Size];
    printf("Enter the elements : \n");
    for(i =0;i<Size;i++)
     {
        scanf("%d",&A[i]);
     }
    printf("The Enterd Array is : ");
    for ( i = 0; i < Size; i++)
    {
        printf(" %d " ,A[i]);
    }

    for( i = 0; i < Size-1; i++)
    {
       for ( j = 0; j < Size-i-1; j++)
       {
          if(A[j] >A[j+1])
           {
             temp = A[j];
             A[j] = A[j+1];
             A[j+1] = temp;
           }
       }
       
    }
    printf("\nThe Array after Bubble Sorting : ");
    for ( i = 0; i < Size; i++)
    {
        printf(" %d " ,A[i]);
    }
    
    
  }