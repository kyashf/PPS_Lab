#include <stdio.h>

int main() {
    int num, sum_even = 0, sum_odd = 0;

    printf("Enter a number: ");
    scanf("%d", &num);

    for (int i = 1; i <= num; i++) {
        if (i % 2 == 0)
            sum_even += i;
        else
            sum_odd += i;
    }

    printf("Sum of even numbers: %d\n", sum_even);
    printf("Sum of odd numbers: %d\n", sum_odd);

    return 0;
}
