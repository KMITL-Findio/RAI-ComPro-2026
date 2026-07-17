#include <stdio.h>

int main() {
    int a, b, c;
    int min, max, sum;
    printf("Enter three integers: ");
    scanf("%d %d %d", &a, &b, &c);
    
    sum = a + b + c;
    min = a;

    if (b < min) {
        min = b;
    }
    if (c < min) {
        min = c;
    }
    max = a;
    if (b > max) {
        max = b;
    }
    if (c > max) {
        max = c;
    }

    printf("Sum: %d\n", sum);   
    printf("Minimum: %d\n", min);
    printf("Maximum: %d\n", max);
    printf("Average: %.2f\n", sum / 3.0);
    return 0;
}   