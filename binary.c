#include <stdio.h>
void main() {
    int n, x, i, mid, a[50], left, right, flag = 0, c = 0;

    c++;
    printf("Enter the size of the array:\n");
    c++;
    scanf("%d", &n);
    c++;
    printf("Enter the elements:\n");
    c++;
    for (i = 0; i < n; i++) {
        c++;
        scanf("%d", &a[i]);
        c++;
    }
    printf("Enter the number to search:\n");
    c++;
    scanf("%d", &x);
    c++;
    left = 0;
    c++;
    right = n - 1;
    c++;

    while (left <= right) {
        c++;
        mid = (left + right) / 2;
        c++;
        if (a[mid] == x) {
            c++;
            flag = 1;
            break;
        } else if (x > a[mid]) {
            c++;
            left = mid + 1;
        } else {
            c++;
            right = mid - 1;
        }
        c++;
    }

    if (flag == 1) {
        c++;
        printf("The element is found\n");
        c++;
    } else {
        c++;
        printf("The element is not found\n");
        c++;
    }

    c++;
    printf("The space complexity = %d\n", (4 * n + 32));
    c++;
    printf("The time complexity = %d\n", c);
}
