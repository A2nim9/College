#include <stdio.h>

int main() {
    int num, originalNum, remainder, result = 0, digits = 0;
    
    printf("Enter a number: ");
    scanf("%d", &num);
    
    originalNum = num;

    int temp = num;
    while (temp != 0) {
        digits++;
        temp /= 10;
    }
    
    temp = num;
    while (temp != 0) {
        remainder = temp % 10;
        int power = 1;
        for (int i = 0; i < digits; i++) {
            power *= remainder;
        }
        result += power;
        temp /= 10;
    }
    
    if (result == originalNum) {
        printf("%d is an Armstrong Number\n", originalNum);
    } else {
        printf("%d is not an Armstrong Number\n", originalNum);
    }
    
    return 0;
}