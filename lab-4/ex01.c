#include <stdio.h>
int sum, int1;
int main() {
    int i;
    printf("Hello, World!\n");
    for (i = 1; i < 11; i++) {
        printf("%d.Enter the number: ", i);
        scanf("%d", &int1);
        sum = sum + int1;
    }
    printf("Total sum is: %d\n", sum);
    return 0;
}