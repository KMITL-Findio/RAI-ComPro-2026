#include <stdio.h>
int n = 0;
int main() {
    int value[10] = {};
    for (int i = 0; i <= 9; i++) {
        printf("Enter the value %d here: ", i + 1);
        scanf("%d", &value[i]);
    }
    printf("Values in array are: ");
    for (int j = 0 ;j <= 9;j++){
        if (j == 9){
            printf("%d",value[j]);
            }
        else {
            printf("%d, ",value[j]);
            }
    }
    printf("\n");
}
