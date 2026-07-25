#include <stdio.h>

int main() {
    int num;
    printf("input a number between 1-100: ");
    scanf("%d", &num);
    switch(num > 100 || num < 1)
    {
        case 0:
            switch (num % 2)
            {
                case 1:
                    printf("odd\n");
                    break;
                case 0:
                    printf("even\n");
                    break;
            }
            break;
        case 1:
            printf("out of range\n");
            break;
    }


    return 0;
}