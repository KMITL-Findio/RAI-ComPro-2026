#include <stdio.h>

int main(){

    char Name[20], Education[100];
    int Age;
    float Height;
    int Weight;
    char gender;

    printf("Enter your name: ");
    scanf("%s", Name);
    printf("Enter your age: ");
    scanf("%d", &Age);
    printf("Enter your height: ");
    scanf("%f", &Height);
    printf("Enter your weight: ");
    scanf("%d", &Weight);
    printf("Enter your gender: ");
    scanf(" %c", &gender);
    printf("Enter your Education Qualification: ");
    scanf(" %[^\n]", Education);

    printf("Name: %s\n", Name);
    printf("Age: %d\n", Age);
    printf("Height: %.2f\n", Height);  
    printf("Weight: %d\n", Weight);
    printf("Gender: %c\n", gender);
    printf("Education: %s\n", Education);
    return 0;
}