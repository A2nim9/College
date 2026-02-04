#include <stdio.h>

int main() {
    int c, newline, neword, chars;
    
    int isInsideWord = 0; 

    newline = neword = chars = 0;

    printf("Enter text: \n");

    while ((c = getchar()) != EOF) {
        chars++; 

        if (c == '\n') {
            newline++; 
        }

        if (c == ' ' || c == '\n' || c == '\t') {
            isInsideWord = 0; 
        } 
        else if (isInsideWord == 0) {
            isInsideWord = 1; 
            neword++;
        }
    }

    printf("\n--- Results ---\n");
    printf("Lines: %d\n", newline);
    printf("Words: %d\n", neword);
    printf("Characters: %d\n", chars);

    return 0;
}