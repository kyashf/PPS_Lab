#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main() {
    FILE *file;
    char fileName[100], word[50], temp[50];
    int count = 0;

    printf("Enter the file name: ");
    scanf("%s", fileName);
    printf("Enter the word to search: ");
    scanf("%s", word);

    file = fopen(fileName, "r");
    if (file == NULL) {
        printf("Error opening file.\n");
        exit(1);
    }

    while (fscanf(file, "%s", temp) != EOF) {
        if (strcmp(temp, word) == 0) {
            count++;
        }
    }

    if (count > 0) {
        printf("The word '%s' exists in the file and occurs %d times.\n", word, count);
    } else {
        printf("The word '%s' does not exist in the file.\n", word);
    }

    fclose(file);

    return 0;
}
