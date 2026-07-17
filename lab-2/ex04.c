#include <stdio.h>

int main() {
    char Name[20];
    int StudentID;
    float Physics, Programming , Calculus;

    printf("Enter your name: ");
    scanf(" %[^\n]", Name);
    printf("Enter your student ID: ");
    scanf("%d", &StudentID);
    printf("Enter your Programming score: ");
    scanf("%f", &Programming);
    printf("Enter your Physics score: ");
    scanf("%f", &Physics);
    printf("Enter your Calculus score: ");
    scanf("%f", &Calculus);

    printf("Hi %s(%d)! Your GPA is %.2f", Name, StudentID, (Programming + Physics + Calculus) / 3.0);

    return 0;
}   