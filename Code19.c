#include <stdio.h>
#include <math.h>

int main() {
    int num, originalNum, remainder, n = 0, result = 0;

    printf("Armstrong numbers between 1 and 100:\n");
    for (int i = 1; i <= 100; i++) {
        num = i;
        while (num != 0) {
            num /= 10;
            ++n;
        }

        num = i;
        while (num != 0) {
            remainder = num % 10;
            result += pow(remainder, n);
            num /= 10;
        }

        if (result == i)
            printf("%d ", i);

        n = 0;
        result = 0;
    }
    printf("\n");

    return 0;
}
