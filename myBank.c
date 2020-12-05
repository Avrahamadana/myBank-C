#define numberOfAccounts 50;
#include <stdio.h>
static int an = 900;
static int  size = 0;
static double account [2][50];
int y;
void accountNumber (double amount){
    if(size < 50 ){
        if(amount < 0){
            printf("Invalid Amount\n");
        }else{
        int flag = 0;
        for(int i=0 ;i < 50 ;i++){
             if(account[1][i] == 0 && flag == 0){
                  account[0][i] = amount;
                   account[1][i] = 1;
                     size++;
                    flag = 1;
                    printf("New account number is: %d\n" ,(an+i+1)); 
            
                }
            }
        }
    }
    else{
        printf("Accounts are full \n");
    }
}
void balanceInquiry (int account_number){
    if(account_number - an <= 50){
        if(account[1][account_number - an -1] == 1){
            printf("The balance of account number %d is: %0.2f \n" ,account_number,account[0][account_number - an -1]);
        }else{
            printf("This account is closed\n");
        }
    }
}    
void deposit (int account_number ){
    if(account_number - an <= 50 && account_number - an >= 0){
        if(account[1][account_number - an -1] == 1){
            printf("Please enter the amount of deposit: \n");
            double amount;
            y = scanf("%lf" , &amount);
            if(y==1 && amount >=0){
                account[0][account_number - an -1]+=amount;
                printf("The new balance is : %0.2f \n" , account[0][account_number - an -1]);
            }
            else if(amount < 0) printf("Cannot deposit a negative amount\n");
            else
            {
                printf("Failed to read the amount\n");
            }
                
        }else{
            printf("This account is closed\n");
        }   
    }else printf("Invalid account number\n");
}
void withdrawal (int account_number){
    if(account_number - an <= 50){
        if(account[1][account_number - an -1] == 1 ){
            double amount;
            printf("Please enter the amount of withdrawl :\n");
            y = scanf("%lf" , &amount);
            if(y ==1 && amount >=0){   
                account[0][account_number - an -1]-=amount;
                printf("The NEW balance after withdrawal is : %0.2f \n" , account[0][account_number - an -1]);
            }
            else if(amount < 0) 
            {
            printf("invalide amount of withdrawl \n");
            }
            else
            {
                printf("Failed to read the amount\n");
            }    
        }else printf("This account is closed\n");
    }else{
            printf("Invalid account number\n");
        }
}
void closeAccount(int account_number){
    if(account_number - an <= 50){
        if(account[1][account_number - an -1] == 1){
            account[1][account_number - an -1] = 0;
            account[0][account_number - an -1] = 0;
            size--;
            printf("Closed account number %d \n" , account_number );
        }else{
            printf("This account is already closed");
        }   
    }   
}
void insterest(double interest){
    if(interest >=0){
        printf("Please enter interest rate: \n");
        for(int i = 0; i<size ;i++){
            double div = interest/100;
            double precent = account[0][i] * div;
            account[0][i]+=precent;
        }
    }else{
        printf("Invalid interest rate\n");
    }    
}
void printAllAccounts(){
    if(size == 0){
        printf("There are no valid accounts \n");
    }else
    {
    for(int i=0 ; i < 50 ; i++){
        if(account[1][i] == 1){
        printf("The number of the account is : %d  | The balance in this account is : %0.2f \n" , an + i + 1  , account[0][i]);
        }
    }
    }
}