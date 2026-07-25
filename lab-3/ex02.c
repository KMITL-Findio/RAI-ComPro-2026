#include <stdio.h>

int main() {
    int number1;

    printf("Enter a number: ");
    scanf("%d", &number1);



    if (number1 > 100 || number1 < 0) {
        printf("%d is out of range\n", number1);
    } 
    else if(number1 % 2 == 0) {
        printf("%d is even\n", number1);
    }
    else {
        printf("%d is odd\n", number1);
    }

    return 0;
}