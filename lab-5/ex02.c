#include <stdio.h>
int n = 0;
int main() {
    int original[] = {1, 2, 3, 4, 5, 6, 7, 8, 9};
    printf("Reversed Array: ");
    for (int j = 8 ;j >= 0;j--){
        printf("%d ",original[j]);
    }
    printf("\n");
}
