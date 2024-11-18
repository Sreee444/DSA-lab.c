#include <stdio.h>
void main()
 {
    int r=0,c=0,k=0,i=0,j=0;
    printf("Enter the Row of the matrix : ");
    scanf("%d",&r);
    printf("Enter the Column of the matrix : ");
    scanf("%d",&c);
    int A[r][c],B[100][3];
    printf("Enter the Elements :\n");
    for ( i = 0; i < r; i++)
     {
       for ( j = 0; j < c; j++)
        {
         scanf("%d",&A[i][j]);
        }
     }
    printf("The Orinal Matrix is :\n");
    for ( i = 0; i < r; i++)
    {
       for ( j = 0; j < c; j++)
       {
        printf(" %d ",A[i][j]);
       }printf("\n");
    }
  B[0][0] = r;
  B[0][1] =c;
  k =1;
 
   for ( i = 0; i < r; i++)
     {
       for ( j = 0; j < c; j++)
        {
           if(A[i][j] != 0)
            {
                B[k][0] = i;
                B[k][1] = j;
                B[k][2] = A[i][j];
                k++;
            }
        }
     }
    B[0][2] =k-1;
    printf("The Sparse Matrix is :\n");
    printf(" Rows Columns Values\n");
    for ( i = 0; i < k; i++)
    {
       for ( j = 0; j < 3; j++)
       {
        printf("%d\t",B[i][j]);
       }printf("\n");
    }
    
 }