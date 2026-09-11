#include<stdio.h>
int main() {
    int size = 6;
    int array[] = {3, 1, 2, 4, 5, 6};
    int *ptr = array;
    for(int i = 5; i >= 0; i--) {
        printf("%d ", *(array + i));
    }
    printf("\n");
    return 0;
}