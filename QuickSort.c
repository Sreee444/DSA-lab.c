#include <stdio.h>
void QuickSort(int A[], int First, int Last);
int Sorting(int A[], int First, int Last);
void main() {
    int x;
    printf("Enter the Size of the Array: ");
    scanf("%d", &x);
    int Arr[x];
    printf("Enter the Elements:\n");
    for (int i = 0; i < x; i++) {
        scanf("%d", &Arr[i]);
    }
    QuickSort(Arr, 0, x - 1);
    printf("The Sorted array is:");
    for (int i = 0; i < x; i++) {
        printf(" %d ", Arr[i]);
    }
}

void QuickSort(int A[], int First, int Last) {
    if (First < Last) {
        int End = Sorting(A, First, Last);
        QuickSort(A, First, End - 1);
        QuickSort(A, End + 1, Last);
    }
}

int Sorting(int A[], int First, int Last) {
    int pivot = A[First];
    int i = First + 1;
    int j = Last;
    int temp;
    while (i <= j) {
        while (i <= Last && A[i] <= pivot) {
            i++;
        }
        while (A[j] > pivot) {
            j--;
        }
        if (i < j) {
            temp = A[i];
            A[i] = A[j];
            A[j] = temp;
        }
    }
    A[First] = A[j];
    A[j] = pivot;
    return j;
}
