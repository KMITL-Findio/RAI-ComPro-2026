#include <stdio.h>
int sum, int1;
int main() {
    int i = 1;
    printf("Hello, World!\n");
    while (i < 11) {
        printf("%d.Enter the number: ", i);
        scanf("%d", &int1);
        sum = sum + int1;
        i++;
    }
    printf("Total sum is: %d\n", sum);
    return 0;
}