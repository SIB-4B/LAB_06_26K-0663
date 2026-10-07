#include <stdio.h>
int main() 
{
 int notes500[5] = {10, 5, 8, 12, 6};
 int notes200[5] = {20, 15, 10, 8, 14};
 int notes100[5] = {30, 25, 40, 35, 20};
 int total500 = 0, total200 = 0, total100 = 0;

 for (int i = 0; i < 5; i++) 
 {
    total500 += notes500[i];
    total200 += notes200[i];
    total100 += notes100[i];
 }

 int totalMoney = (total500 * 500) + (total200 * 200) + (total100 * 100);
 printf("Total Money available in ATM: Rs. %d\n", totalMoney);

 int withdrawalAmount;
 printf("Enter the amount you want to withdraw: ");
 scanf("%d", &withdrawalAmount);

 if (withdrawalAmount > totalMoney) 
 {
    printf("Insufficient Funds\n");
 } 
 else if (withdrawalAmount % 100 != 0) 
 {
    printf("Invalid Amount\n");
 } 
 else 
 {
    printf("Transaction Approved\n");
 }

 return 0;
}