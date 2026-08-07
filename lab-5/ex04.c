#include <stdio.h>
int odd = 0;
int main() {
    int value[10] = {};
    for (int i = 0; i <= 9; i++) {
        printf("Enter the value %d here: ", i + 1);
        scanf("%d", &value[i]);
    }
    for (int i = 0; i <= 9; i++){
        if (value[i] % 2 != 0){
            odd = odd + 1;
        }
    }
    printf("Even numbers: %d\n",10 - odd);
    printf("Odd numbers: %d",odd);
    printf("\n");
}
