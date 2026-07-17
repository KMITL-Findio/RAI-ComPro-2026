#include <stdio.h>

int main(){

    float point;
    char name[20];
    printf("Enter your name: ");
    scanf("%[^\n]", name);
    printf("enter your point: ");
    scanf("%f", &point);
    
    if (strlen(name) > 20){
        printf("Name is too long\n");
        return 0;
    }
    
    else{
        printf("Name : %s, Point : %.2f\n", name, point);
    }
    return 0;
}