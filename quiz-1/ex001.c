#include <stdio.h>
#include <string.h>

float gradeToScore(const char *grade) {
    if (strcmp(grade, "A") == 0) return 4.0f;
    if (strcmp(grade, "B+") == 0) return 3.5f;
    if (strcmp(grade, "B") == 0) return 3.0f;
    return 0.0f;
}

int main(void) {
    printf("%-20s : %s\n", "Programming", "A");
    printf("%-20s : %s\n", "Drawing", "B+");
    printf("%-20s : %s\n", "Mechanics", "B+");
    printf("%-20s : %s\n", "Math", "B");
    printf("%-20s : %.1f\n", "GPS", (gradeToScore("A") + gradeToScore("B+") + gradeToScore("B+") + gradeToScore("B")) / 4.0);
    return 0;
}


