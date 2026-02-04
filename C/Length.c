#include <stdio.h>
#include <string.h>

int Length(char *str) {
    int length = 0;
    while (*str != '\0') {
        length++;
        str++;
    }
    return length;
}

int main() {
    char str[100];
    printf("Enter a string: ");
    fgets(str, sizeof(str), stdin);
    
    int len = Length(str);
    printf("The length of the string is: %d\n", len);
    
    return 0;
}