#include <stdio.h>
int main() 
{
 int transfers[10] = {5000, 50, 12000, 500000, 20, 8000, 25000, 300, 450000, 15000};
 int flaggedCount = 0;
 int normalSum = 0;
 int normalCount = 0;
 int largestTransfer = transfers[0];

 printf("--- Transfer Status ---\n");

 
 for (int i = 0; i < 10; i++) 
 {
    int amount = transfers[i];

    if (amount > largestTransfer) 
    {
    largestTransfer = amount;
    }

    if (amount < 100) 
    {
    printf("Transfer %d (%d): FLAGGED (Too small / test transaction)\n", i + 1, amount);
    flaggedCount++;
    } 
    else if (amount > 200000) 
    {
    printf("Transfer %d (%d): FLAGGED (Too large / suspicious)\n", i + 1, amount);
    flaggedCount++;
    } 
    else 
    {
    printf("Transfer %d (%d): Normal\n", i + 1, amount);
    normalSum += amount;
    normalCount++;
    }
 }

 printf("\n-----------------------------------\n");
 printf("Total Flagged Transfers: %d\n", flaggedCount);

 if (normalCount > 0) 
 {
    double normalAverage = (double)normalSum / normalCount;
    printf("Average of Normal Transfers: Rs. %.2f\n", normalAverage);
 } 
 else 
 {
    printf("No normal transfers found.\n");
 }
 printf("Largest Transfer Amount: Rs. %d\n", largestTransfer);


  return 0;
}