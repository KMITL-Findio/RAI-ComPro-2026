#include <stdio.h>

int main() {
    int number1, number2;

    printf("Enter a number: ");
    scanf("%d", &number1);

    printf("Enter a number: ");
    scanf("%d", &number2);

    if (number1 == number2) {
        printf("Match\n");
    } else {
        printf("Does not match. Try again\n");
    }

    return 0;
}  