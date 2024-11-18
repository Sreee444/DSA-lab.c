#include <stdio.h>
void main()
{
    int i,j,temp,Size;
    printf("Enter the size of the Array : ");
    scanf("%d" ,&Size);
    int A[Size];
    printf("Enter the elements :\n");
    for(i =0;i<Size;i++)
     {
        scanf("%d",&A[i]);
     }
    printf("Entered array : ");
    for(i =0;i<Size;i++)
     {
        printf(" %d ",A[i]);
     }
    for ( i = 1 ; i < Size; i++)
    {
       temp = A[i];
       j =i-1;
       while (j>=0 && temp <= A[j])
       {
         A[j+1] = A[j];
         j--;
       }
       A[j+1] = temp;
    }
     printf("\nArray after Insertion Sort : ");
    for(i =0;i<Size;i++)
     {
        printf(" %d ",A[i]);
     }
}