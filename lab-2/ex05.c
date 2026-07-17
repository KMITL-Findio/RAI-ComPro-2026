#include <stdio.h>

int main() {
    char Firstname[50], Lastname[50], University[20];
    int age;
    float height;

    printf("Enter your first name: ");
    scanf("%s", Firstname);
    scanf("%s", Lastname);
    printf("Enter your age: ");
    scanf("%d", &age);
    printf("Enter your height: ");
    scanf("%f", &height);
    printf("Enter you University name: ");
    scanf("%s", University);

    printf("Hi! Everyone. This is %c.%s from %s. I am %d years old and my height is %.1f cm tall.", Lastname[0], Firstname, University, age, height);

    return 0;
}   