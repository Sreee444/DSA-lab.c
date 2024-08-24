#include <stdio.h>

void main() {
    int a[50], x, i, n, count = 0, time = 0;

    time++;
    time++;
    printf("Enter the number of elements:\n");
    time++;
    scanf("%d", &n);
    time++;
    printf("Enter the numbers:\n");
    time++;

    for (i = 0; i < n; i++) 
    {
        time++;
        scanf("%d", &a[i]);
        time++;
    }

    time++;
    printf("Enter the number to search:\n");
    time++;
    scanf("%d", &x);
    time++;

    for (i = 0; i < n; i++) 
    {
        time++;
        if (x == a[i]) 
        {
            count++;
            time++;
            printf("The element is found at position %d\n", i + 1);
            time++;
        }
        time++;
    }

    if (count > 0) 
     {
        time++;
        printf("The element is found %d times\n", count);
        time++;
     } 
    else 
     {
        printf("The element is not found\n");
        time++;
     }

    printf("The Space Complexity is %d\n", (n * 4) + 20);
    time++;
    time++;
    printf("The Time Complexity is %d\n", time);
}
