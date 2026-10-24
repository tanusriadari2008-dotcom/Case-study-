//Case Study//
#include<stdio.h>
void main()
{
int choice;
float balance,amount;
printf("\nEnter current balance");
scanf("%f",&balance);
printf("1.Balance Inquiry");
printf("\n2.Cash withdrawal");
printf("\n3.Cash deposit");
printf("\nEnter your choice");
scanf("%d",&choice);
switch(choice)
{
case 1:
       printf("\nCurrent balance:%.2f",balance);
       break;
case 2:
       printf("\nEnter withdrawal amount");   
       scanf("%f",&amount);
       if(amount<=balance&&amount>0)
       {
       balance -=amount;
       printf("\nTransaction successful");
       printf("\nRemaining balance:%.2f",balance);
       }
       else
       {
       printf("\nInsufficient balance");
       }
       break;
case 3:
       printf("Enter deposit amount");      
       scanf("%f",&amount);
       if(amount>0)
       {
       balance+=amount;
       printf("Deposit successful\n");
       printf("updated balance:%.2f\n",balance);
       }
       else
       {
       printf("Invalid deposit amount\n");
       }
       break;
default:
        printf("Invalid option\n");       
}        
}