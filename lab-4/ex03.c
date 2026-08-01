#include <stdio.h>
int num; 
int main(){
    num = 1;
    do{
        printf("Enter the number: ");
        scanf("%d", &num);
        if (num == 0){
           continue;
        }
        else if(num % 2 == 0){
            printf("The number is even.\n");
        }
        else{
            printf("The number is odd.\n");
        }
    }
    while(num != 0);
    printf("Exiting Program... Bye\n");

    return 0;
}