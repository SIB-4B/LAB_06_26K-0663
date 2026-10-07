#include <stdio.h>
int main() 
{
 int signals[12] = {15, 8, 22, 19, 5, 30, 12, 18, 25, 9, 14, 21};
 int totalCars = 0;


 for (int i = 0; i < 12; i++) 
 {
    totalCars += signals[i];
 }

 double average = (double)totalCars / 12.0;

 int overloadedCount = 0;
 int highest = signals[0];
 int lowest = signals[0];


 for (int i = 0; i < 12; i++) 
 {
    if (signals[i] > average) 
    {
     overloadedCount++;
    }
    if (signals[i] > highest) 
    {
     highest = signals[i];
    }
    if (signals[i] < lowest) 
    {
     lowest = signals[i];
    }
 }

 int difference = highest - lowest;

 printf("Average cars waiting: %.2f\n", average);
 printf("Overloaded signals count: %d\n", overloadedCount);
 printf("Highest cars at a signal: %d\n", highest);
 printf("Lowest cars at a signal: %d\n", lowest);
 printf("Difference (Highest - Lowest): %d\n", difference);

 return 0;
}