#include <stdio.h>

int main() {
    int num, sum = 0;

    printf("Enter a number: ");
    scanf("%d", &num);

    for (int i = 1; i <= num; i++) {
        sum += i;
    }

    printf("Sum of all numbers up to %d: %d\n", num, sum);

    return 0;
}
