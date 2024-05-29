#include <stdio.h>
#include <math.h>

int binaryToDecimal(int binary) {
    int decimal = 0, i = 0, remainder;
    while (binary != 0) {
        remainder = binary % 10;
        binary /= 10;
        decimal += remainder * pow(2, i);
        ++i;
    }
    return decimal;
}

int decimalToBinary(int decimal) {
    int binary = 0, i = 1, remainder;
    while (decimal != 0) {
        remainder = decimal % 2;
        decimal /= 2;
        binary += remainder * i;
        i *= 10;
    }
    return binary;
}

int main() {
    int choice, num;

    printf("Enter 1 to convert Binary to Decimal.\n");
    printf("Enter 2 to convert Decimal to Binary.\n");
    printf("Enter your choice: ");
    scanf("%d", &choice);

    if (choice == 1) {
        printf("Enter a binary number: ");
        scanf("%d", &num);
        printf("Decimal equivalent: %d\n", binaryToDecimal(num));
    } else if (choice == 2) {
        printf("Enter a decimal number: ");
        scanf("%d", &num);
        printf("Binary equivalent: %d\n", decimalToBinary(num));
    } else {
        printf("Invalid choice.\n");
    }

    return 0;
}
