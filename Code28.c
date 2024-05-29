#include <stdio.h>

int myStrlen(char *str) {
    int length = 0;
    while (str[length] != '\0') {
        length++;
    }
    return length;
}

void myStrcpy(char *dest, const char *src) {
    while (*src) {
        *dest = *src;
        src++;
        dest++;
    }
    *dest = '\0';
}

void myStrcat(char *dest, const char *src) {
    while (*dest) {
        dest++;
    }
    while (*src) {
        *dest = *src;
        src++;
        dest++;
    }
    *dest = '\0';
}

int main() {
    char str1[100], str2[100], str3[200];

    printf("Enter the first string: ");
    scanf("%s", str1);
    printf("Enter the second string: ");
    scanf("%s", str2);

    printf("Length of first string: %d\n", myStrlen(str1));
    printf("Length of second string: %d\n", myStrlen(str2));

    myStrcpy(str3, str1);
    printf("Copied string: %s\n", str3);

    myStrcat(str1, str2);
    printf("Concatenated string: %s\n", str1);

    return 0;
}
