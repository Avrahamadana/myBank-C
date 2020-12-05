#include <stdio.h>
#include "myBank.h"


int main(){
    int x =0;

    char options;
    printf("\nPlease choose a transaction type: \n O-Open Account \n B-Balance Inquiry \n D-Deposit \n W-Withdrawal \n C-Close Account \n I-Interest \n P-Print \n E-Exit\n");
    scanf("%c" , &options);
    while(options != 'E')
    {
        if(options == 'O')
        {
            double amount = 0;
            printf("Please enter amount for deposit :");
            x = scanf("%lf" ,&amount);
            if(x == 1){
            accountNumber(amount);
            }else{
                printf("Failed to read the amount \n");
            }
            
        }
        else if (options == 'B')
        {
            int AccountNumber = 0;
            printf("Please enter account number:");
            x = scanf("%d",&AccountNumber);
            if(x == 1){
                balanceInquiry(AccountNumber);
            }else{
                printf("Failed to read the account number\n");
            }
        }
        else if (options == 'D')
        {
            int AccountNumber = 0;
            printf("Please enter account number:");
            x =scanf("%d",&AccountNumber);
            if(AccountNumber < 0){
                printf("Invalid account number\n");
            }else{
                if(x == 1 ){
                    deposit(AccountNumber);
                }else{
                    
                    printf("Failed to read the account number\n");
                }
            }
        }
        else if(options == 'W')
        {
            int AccountNumber = 0;
            printf("Please enter account number:");
            x = scanf("%d",&AccountNumber);
            if(AccountNumber<0)
            {
                 printf("Failed to read the account number");
            }
            else
            {
                if(x==1)
                {
                    withdrawal(AccountNumber);
                }
                else
                {
                    printf("Failed to read the account number\n");
                }
                
            }
        }
        else if(options == 'C')
        {
            int AccountNumber = 0;
            printf("Please enter account number:");
            x = scanf("%d",&AccountNumber);
            if(x==1){
                closeAccount(AccountNumber);
            }else{
                printf("Failed to read the account number \n");
            }    
            
        }
        else if (options == 'I')
        {
            double inter = 0;
            printf("Please enter interest rate:");
            x = scanf("%lf" ,&inter);
            if(x == 1){
                insterest(inter);
            }else{
                printf("Failed to read the interest rate\n");
            }    
            
        }
        else if(options == 'P')
        {
            printAllAccounts();
            
        }
        else if (options == 'E')
        {
            break;
        }
        
        else
        {
            printf("Invalid transaction type\n");
        }   
      printf("\n");
    printf("Please choose a transaction type: \n O-Open Account \n B-Balance Inquiry \n D-Deposit \n W-Withdrawal \n C-Close Account \n I-Interest \n P-Print \n E-Exit\n");
    scanf(" %c" , &options);
    
    }

    return 0;
}