#include <stdio.h>
char LetterGrade(int score) {
    if (score >= 80) return 'A';
    if (score >= 70) return 'B';
    if (score >= 60) return 'C';
    if (score >= 50) return 'D';
    return 'F';
}

float NumGrade(int score) {
    if (score >= 80) return 4.0f;
    if (score >= 70) return 3.0f;
    if (score >= 60) return 2.0f;
    if (score >= 50) return 1.0f;
    return 0.0f;
}

int main(void) {
    int Cal, Phy, Compro;

    printf("Calculus score: ");
    scanf("%d", &Cal);
    printf("Physics score: ");
    scanf("%d", &Phy);
    printf("Compro score: ");
    scanf("%d", &Compro);

    printf("%-12s%-12s%-12s%-12s\n", "Subject", "Score", "Grade", "Points");
    printf("-----------------------------------------\n");
    printf("%-12s%-12d%-12c%-12.1f\n", "Cal", Cal, LetterGrade(Cal), NumGrade(Cal));
    printf("%-12s%-12d%-12c%-12.1f\n", "Phy", Phy, LetterGrade(Phy), NumGrade(Phy));
    printf("%-12s%-12d%-12c%-12.1f\n", "Compro", Compro, LetterGrade(Compro), NumGrade(Compro));

    printf("\nGPA: %.1f\n", (NumGrade(Cal) + NumGrade(Phy) + NumGrade(Compro)) / 3.0f);

    return 0;
}
