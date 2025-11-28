#include <stdio.h>

int Factorial(int n) {
    int result = 1;
    int i;
    for (i = 1; i <= n; i++) {
        result *= i;
    }

    return result;
}

int main() {
    int number;
    int fact;

    printf("Enter a positive integer: ");    
    if (scanf("%d", &number) != 1) {
        printf("Invalid input.\n");
        return 1;
    }
    if (number < 0) {
        printf("Error: Factorial of a negative number doesn't exist.\n");
    } else {
        fact = Factorial(number);
        printf("Factorial of %d is %d\n", number, fact);
    }

    return 0;
}

