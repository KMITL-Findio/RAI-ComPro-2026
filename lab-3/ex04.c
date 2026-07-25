#include <stdio.h>

int main(){
    int Phy, Sci, Cal;
    float Avg;
    char name[40], Grade;
    printf("Enter your name: ");
    scanf("%s", name);
    printf("Enter your Physics score: ");
    scanf("%d", &Phy);
    printf("Enter your Chemistry score: ");
    scanf("%d", &Sci);
    printf("Enter your Biology score: ");
    scanf("%d", &Cal);

    Avg = (Phy + Sci + Cal) / 3.0;
    
    if (Avg >= 80){
        Grade = 'A';
    } else if (Avg >= 70){
        Grade = 'B';
    } else if (Avg >= 60){
        Grade = 'C';
    } else if (Avg >= 50){
        Grade = 'D';
    } else {
        Grade = 'F';
    }

    printf("%s, your average is %.2f. You got grade %c.\n", name, Avg, Grade);

    return 0;
}