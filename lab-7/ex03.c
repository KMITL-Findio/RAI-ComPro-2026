#include<stdio.h>
    int main() {
        int num[] = {3, 1, 2, 4, 5, 6};
        int *ptr = num, max = *ptr, min = *ptr;
        for(int i = 0; i < 6; i++) {
            if(*(ptr + i) > max) {
                max = *(ptr + i);
            }
            if(*(ptr + i) < min) {
                min = *(ptr + i);
            }
        }
        printf("Max: %d, Min: %d\n", max, min);
        return 0;
    }
