#include <stdio.h>
#include <stdlib.h>

int main() {
    FILE *sourcePtr, *destPtr;
    char Origin[100], destination[100];
    char ch;

    printf("Enter source filename: ");
    scanf("%s", Origin);
    printf("Enter destination filename: ");
    scanf("%s", destination);

    sourcePtr = fopen(Origin, "r");
    if (sourcePtr == NULL) {
        printf("Error: Cannot open source file %s\n", Origin);
        exit(1);
    }

    destPtr = fopen(destination, "w");
    if (destPtr == NULL) {
        printf("Error: Cannot create/open destination file %s\n", destination);
        fclose(sourcePtr);
        exit(1);
    }

    while ((ch = fgetc(sourcePtr)) != EOF) {
        fputc(ch, destPtr);
    }

    printf("\nSuccess! File copied from %s to %s.\n", Origin, destination);

    fclose(sourcePtr);
    fclose(destPtr);

    return 0;
}