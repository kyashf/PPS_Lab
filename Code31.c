#include <stdio.h>
#include <stdlib.h>

int main() {
    FILE *file1, *file2;
    char file1Name[100], file2Name[100], ch1, ch2;
    int identical = 1;

    printf("Enter the first file name: ");
    scanf("%s", file1Name);
    printf("Enter the second file name: ");
    scanf("%s", file2Name);

    file1 = fopen(file1Name, "r");
    file2 = fopen(file2Name, "r");

    if (file1 == NULL || file2 == NULL) {
        printf("Error opening files.\n");
        exit(1);
    }

    while (((ch1 = fgetc(file1)) != EOF) && ((ch2 = fgetc(file2)) != EOF)) {
        if (ch1 != ch2) {
            identical = 0;
            break;
        }
    }

    if (identical && (fgetc(file1) == EOF) && (fgetc(file2) == EOF)) {
        printf("The files are identical.\n");
    } else {
        printf("The files are different.\n");
    }

    fclose(file1);
    fclose(file2);

    return 0;
}
