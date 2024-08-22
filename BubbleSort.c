#include <stdio.h>
void main() 
{
    int n, i, j, temp, t = 0;
    printf("Enter the number of elements:\n");
    t++;
    scanf("%d", &n);
    t++;
    int a[n];
    t++;

    printf("Enter %d elements:\n", n);
    t++;
    for (i = 0; i < n; i++) {
        t++;
        scanf("%d", &a[i]);
        t++;
    }
    for (i = 0; i < n - 1; i++) {
        t++;
        for (j = 0; j < n - i - 1; j++) {
            t++;
            if (a[j] > a[j + 1]) {
                t++;
               
                temp = a[j];
                t++;
                a[j] = a[j + 1];
                t++;
                a[j + 1] = temp;
                t++;
            }
        }
    }
    printf("Sorted array: \n");
    t++;
    for (i = 0; i < n; i++) {
        t++;
        printf("%d ", a[i]);
        t++;
    }
    printf("\nSpace Complexity = %d\n" ,(36+(n*4)));
    t++;
    printf("Time Complexity = %d\n", t);
}
