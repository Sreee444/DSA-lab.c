# include<stdio.h>
 void main()
  {
    int i,j,small =0,Size,temp;
    printf("Enter the size of the Array : ");
    scanf("%d",&Size);
    int A[Size];
    printf("Enter the elements : \n");
    for(i =0;i<Size;i++)
     {
        scanf("%d",&A[i]);
     }
     printf("Entered Array is : ");
     for(i =0;i<Size;i++)
     {
        printf(" %d ",A[i]);
     }

     for(i = 0;i<Size;i++)
      {
        small = i;
         for ( j = i+1; j < Size; j++)
         {
            if(A[small] > A[j])
            {
               small  = j;
            }
         }
         if(small != i) {
            temp = A[i];
            A[i] = A[small];
            A[small] = temp;
         }
      }
       printf("\nThe Array after Selection Sorting : ");
     for(i =0;i<Size;i++)
     {
        printf(" %d ",A[i]);
     }
  }