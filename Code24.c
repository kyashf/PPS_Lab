#include <stdio.h>

int main() {
    int n, target, found = 0;

    printf("Enter the number of elements: ");
    scanf("%d", &n);

    int arr[n];

    for (int i = 0; i < n; i++) {
        printf("Enter element %d: ", i + 1);
        scanf("%d", &arr[i]);
    }

    printf("Enter the element to search: ");
    scanf("%d", &target);

    for (int i = 0; i < n; i++) {
        if (arr[i] == target) {
            printf("Element found at index %d\n", i);
            found = 1;
            break;
        }
    }

    if (!found) {
        printf("Element not found in the array\n");
    }

    return 0;
}
