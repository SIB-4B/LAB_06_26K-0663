#include <stdio.h>
int main() 
{
 int amount = -1;
 int transactionCount = 0;
 int totalWithdrawn = 0;

 printf("=== Welcome to the ATM ===\n");
 printf("Enter withdrawal amount (or enter 0 to exit session):\n");

 while (1) 
 {
    printf("\nEnter amount: ");
    scanf("%d", &amount);

    if (amount == 0) 
    {
        printf("Ending session...\n");
        break;
    }

    if (amount > 0) 
    {
        transactionCount++;
        totalWithdrawn += amount;
        printf("ATM processed: Rs. %d\n", amount);
    } 
    else 
    {
        printf("Invalid amount. Please enter a positive number.\n");
    }
 }

 printf("\n===================================\n");
 printf("=== SESSION SUMMARY ===\n");
 printf("Total Transactions Made: %d\n", transactionCount);
 printf("Total Amount Withdrawn: Rs. %d\n", totalWithdrawn);
 printf("Thank you for using our ATM!\n");

 
 return 0;
}