#include<stdio.h>

void viewBalance(double balance){
    printf("your current balance is : $%.2lf\n",balance);
}

void depositFunds(double *balance){
    double deposit;
    printf("Enter amount to deposit:$");
    scanf("%lf",&deposit);
    
    if (deposit > 0) {
      *balance += deposit;
      printf("Deposited $%.2lf. Your new balance is: $%.2lf\n",deposit,*balance);
    }else{
        printf("Invalid deposit amount. please try again.\n");
    }    
    
}

void withdrawFunds(double *balance){
    double withdrawl;
    printf("Enter amount to withdraw : $");
    scanf("%lf",&withdrawl);
    if ( withdrawl <=0 ){
         printf("Invalid deposit amount. please try again.\n");
    }else if( withdrawl > *balance ){
        printf("Insufficient balance ! your balance is $%.2lf\n", *balance);
    }else{
        *balance -= withdrawl;
        printf("withdrawn $%.2lf. your new balance is : $%.2lf\n",withdrawl, *balance);
    }    
}
int main(){
    double balance = 0.0;
    unsigned short choice;
     
    do{
        printf("\nWelcome to the Bank!\n");
        printf("1. View Balance\n");
        printf("2. Deposit Funds\n");
        printf("3. Withdraw Funds\n");
        printf("4. Exit\n");
        printf("Enter your choice:");
        scanf("%hu",&choice);
         
        switch(choice){
            case 1: {
                viewBalance(balance); 
                break;
            }
            case 2 :{
                depositFunds(&balance);
                break;
            }
            case 3:{
                withdrawFunds(&balance);
                break;
            }
            case 4:{
                printf("thank you for visiting have a Good Day !!");    
                break;
            }
            default:{
                printf("Invalid Choice.Please select a valid option.\n");
            }
        }

    }while(choice !=4);
    
    return 0;
}
