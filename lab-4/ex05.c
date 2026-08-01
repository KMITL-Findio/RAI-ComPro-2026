#include <stdio.h>
int main(){
    int num, i, fac = 1;
    printf("Enter a number: ");
    scanf("%d",&num);
    i = num;
    while (i>1)
    {
        fac = fac*i;
        i=i-1;
    }
    printf("Factorial of %d is %d\n", num, fac);
}
