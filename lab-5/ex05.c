#include <stdio.h>
int main() {
    int value[8] = {};
    for (int i = 0; i <= 7; i++) {
        printf("Enter number %d : ", i + 1);
        scanf("%d", &value[i]);
    }
    int Min = value[0], Max = value[0];
for (int k = 1; k < 8; k++) {
    if (value[k] > Max) {
        Max = value[k];
    }
    if (value[k] < Min) {
        Min = value[k];
    }
}
    printf("Largest number: %d\n",Max);
    printf("Smallest number: %d",Min);
    printf("\n");
}
