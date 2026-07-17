#include <stdio.h>

int main(){

    int num1;
    float num2;
    char char1;
    printf("Please enter an integer value: ");
    scanf("%d", &num1);
    printf("Integer: %d\n", num1);

    printf("Please enter a float value: ");
    scanf("%f", &num2);
    printf("Float: %.1f\n", num2);

    printf("Please enter a character: ");
    scanf(" %c", &char1);
    printf("Character: %c\n", char1);

    return 0;
}