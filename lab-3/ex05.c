#include <stdio.h>

int main() {
    float Pi, hight, radius, area;
    printf("Enter cone hight: ");
    scanf("%f", &hight);
    printf("Enter cone base radius: ");
    scanf("%f", &radius);
    Pi = 3.141592653;
    
    area = (1.0/3.0) * Pi * radius * radius * hight;

    if (area > 260){
        printf("Cone volume is greater than 260.\n");
        printf("This cone is perfect for Supun project.\n");
    } else {
        printf("Cone volume = %.1f \n", area);
        printf("This cone is not fit for this project\n");
    }

    return 0;
}