#include <stdio.h>
#include <stdlib.h>

int main() {
    FILE *fptr;
    char filename[100];
    char c;

    printf("Enter the fname to open: ");
    scanf("%99s", filename);

    fptr = fopen(filename, "r");

    if (fptr == NULL) {
        printf("Error: Could not open file %s. \n", filename);
        exit(0);
    }

    printf("\n--- File Content Below ---\n");

    while ((c = fgetc(fptr)) != EOF) {
        printf("%c", c);
    }

    fclose(fptr);

    printf("\n--- End of File ---\n");

    return 0;
}