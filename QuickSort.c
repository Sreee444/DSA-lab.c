# include <stdio.h>

void QuickSort(int A[],int First , int Last);
int Sorting(int A[],int First , int Last);

 void main()
   {
    int Size;
    printf("Enter the size of the Array : ");
    scanf("%d",&Size);
    int A[Size];
    printf("Enter the elements : \n");
    for (int i = 0; i < Size; i++)
     {
        scanf("%d",&A[i]);
     }
    printf("The Entered array is : ");
    for (int i = 0; i < Size; i++)
     {
        printf(" %d ",A[i]);
     }
     QuickSort(A,0,Size-1);
     printf("\nThe Array after QuickSorting : ");
    for (int i = 0; i < Size; i++)
     {
        printf(" %d ",A[i]);
     }
   }


int sorting(int A[],int First , int Last)
{
    int pivot = A[First];
    int  i = First +1;
    int j = Last;
    int temp;
    while (i<=j)
    {
        while (i<=Last && pivot >= A[i])
        {
            i++;
        }
       while (pivot<A[j])
       {
         j--;
       }
       if(i<j)
        {
            temp = A[i];
            A[i] = A[j];
            A[j] = temp;
        }
    }
  A[First] = A[j];
  A[j] = pivot;
    return j;
}
void QuickSort(int A[],int First , int Last)
 {
   if (First<Last)
   {
      int end = sorting(A,First,Last);
      QuickSort( A, First ,end-1);
      QuickSort( A, end+1 ,Last);
   }
   
 }
