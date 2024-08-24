#include <stdio.h>
void main() {
    int n, i, j, a[50], small, c = 0, temp;

    c++;
    printf("Enter the size of the array:\n");
    c++;
    scanf("%d", &n);
    printf("Enter the elements:\n");
    c++;

    for (i = 0; i < n; i++) {
        c++;
        scanf("%d", &a[i]);
        c++;
     }

    for (i = 0; i < n; i++) {
        c++;
        small = i;

        for (j = i + 1; j < n; j++) {
            c++;
            if (a[small] > a[j]) {
                c++;
                small = j;
            }
        }
        if (small != i) {
            temp = a[i]; c++;
            a[i] = a[small]; c++;
            a[small] = temp; c++;
        }
    }

    printf("The sorted elements are:\n");
    c++;

    for (i = 0; i < n; i++) {
        c++;
        printf("%d\t", a[i]);
        c++;
    }

    c++;
    printf("\nThe space complexity = %d\n", (4 * n + 32));
    c++;
    printf("The time complexity = %d\n", c);
}
