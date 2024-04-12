#include<stdio.h>
#include<stdlib.h>
#include<time.h>
int main()
{
   char decision;
   char name;
   long long int mobilenumber;
   long long int aadharnumber;
   char account;
   long long int accountnumber;
   long long int amount;
   int ph;
   long long int adhaar;
   
   
   printf("************WELCOME TO PES INDIAN BANK*************\n");
    printf("Do you want to create an account?\n");
    scanf("%s",&decision);
    if(decision=='Y'|decision=='y')
    {
        printf("Enter account holder name:\n");
        scanf("%s",&name);
        printf("Please enter your mobile number:\n");
        scanf("%lld",&ph);
        while (ph < 999999999 || ph > 10000000000)
        {
            printf("Please enter a valid mobile number\n");
            
        scanf("%lld",&ph);
            
            
        }
         printf("Please enter your Adhaar number:\n");
        scanf("%lld", &adhaar);
        while (adhaar < 99999999999 | adhaar > 1000000000000)
        {
            printf("enter valid aadhar number which consists of 12 digits\n");
            printf("Please enter your Adhaar number:\n");
            scanf("%lld", &adhaar);
        }
        
        printf("Enter the type of account(S for saving and C for current):");
        scanf("%s",&account);
        if(account =='S'|account=='s')
        {
            printf("You have created a savings account successfully.\n");
        }
        else if(account =='C'|account =='c')
        {
          printf("You have created a current account successfully.\n");
        }
        else
        { 
          printf("Invalid input");  
        }  
        srand(time(0));
        accountnumber=accountnumber*1000+rand()%10;
        printf("Your account number is:\n");
        printf("%lld\n",accountnumber);
         printf("Enter amount to be deposited:");
        scanf("%lld",&amount);
        printf("Rs.%lld has been deposited successfully.\n",amount);
        printf("The available balance is Rs.%lld\n",amount);


    
    }
    else if(decision=='N'|decision=='n')
    {
        printf("Ok\n");
    }

    else
    {
        printf("Invalid input");
    }


return 0;
    

    
}