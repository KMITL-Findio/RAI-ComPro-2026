#include <stdio.h>
int sum = 0, Max = 0;
int main() {
    int value[5] = {};
    for (int i = 0; i <= 4; i++) {
        printf("Enter the marks of student %d here: ", i + 1);
        scanf("%d", &value[i]);
    }
    for (int j = 0; j <= 4; j++){
        sum = sum + value[j];
    }
    Max = value[0];
    for (int k = 1; k < 5; k++){
        if (value[k] > Max){
            Max = value[k];
        }
    }
    printf("Total Marks : %d\n",sum);
    printf("Highest Marks: %d",Max);
    printf("\n");
}
