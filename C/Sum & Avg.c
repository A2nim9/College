#include <stdio.h>
int main() {
    int a, b, c, sum, avg;
    printf("Enter three integers: ");
    scanf("%d %d %d", &a, &b, &c);

    sum = a + b + c;
    avg = sum / 3;
    
    printf("Sum: %d\n", sum);
    printf("Average: %d\n", avg);
    return 0;
}