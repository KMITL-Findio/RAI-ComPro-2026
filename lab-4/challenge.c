#include <stdio.h>
int input, i=1;
float cash = 0.0, j;
int main(){
    for (i=1;i<=2;i--){
        printf("\n====== ATM MENU ======");
        printf("\n1. Check Balance\n2. Deposit Money\n3. Withdraw Money\n4. Exit\nChoose an option: ");
        scanf("%d", &input);
        if (input == 2){
            printf("Enter amount to deposit: ");
            scanf("%f", &j);
            cash = cash + j;
        }
        else if (input == 1){
            printf("Current Balance: %.2f\n", cash);
        }
        else if (input == 3){
            printf("Enter amount to withdraw: ");
            scanf("%f", &j);
            printf("Withdrawal successful.\n");
            cash = cash - j;
            continue;
        }
        else if (input == 4){
            printf("Thank you for using the ATM.\n");
            break;
        }
        else{
            printf("Invalid option. Please try again.\n");
        }
    }
    
    return 0;
}