#include <stdio.h>

int main() {
    int n;

    printf("Enter the number of elements: ");
    scanf("%d", &n);

    int arr1[n], arr2[n], sumArr[n];

    for (int i = 0; i < n; i++) {
        printf("Enter element %d of array 1: ", i + 1);
        scanf("%d", &arr1[i]);
    }

    for (int i = 0; i < n; i++) {
        printf("Enter element %d of array 2: ", i + 1);
        scanf("%d", &arr2[i]);
    }

    for (int i = 0; i < n; i++) {
        sumArr[i] = arr1[i] + arr2[i];
    }

    printf("Sum of corresponding elements: ");
    for (int i = 0; i < n; i++) {
        printf("%d ", sumArr[i]);
    }
    printf("\n");

    return 0;
}
