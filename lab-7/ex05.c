#include<stdio.h>
int main() {
    int size = 6, sum = 0;
    int array[] = {3, 1, 2, 4, 5, 6};
    int *ptr = array;
    for(int i = 0; i < 6; i++) {
        if (*(array + i) % 2 == 0) {
          sum += *(array + i);
        }
    }
    printf("Sum of even numbers: %d", sum);
    printf("\n");
    return 0;
}