#include <stdio.h>
int main() 
{
 int marks[15] = {88, 97, 65, 100, 96, 72, 99, 45, 94, 98, 80, 93, 85, 90, 78};
 int totalSum = 0;
 int countExact100 = 0;

    
 for (int i = 0; i < 15; i++) 
 {
    if (marks[i] + 5 > 100) 
    {
        marks[i] = 100;
    } 
    else 
    {
        marks[i] += 5;
    }

    totalSum += marks[i];

    if (marks[i] == 100) 
    {
        countExact100++;
    }
 }

 double average = (double)totalSum / 15.0;
 int highest = marks[0];
 int lowest = marks[0];

 for (int i = 1; i < 15; i++) 
 {
    if (marks[i] > highest) 
    {
        highest = marks[i];
    }
    if (marks[i] < lowest) 
    {
        lowest = marks[i];
    }
 }

 int range = highest - lowest;

 printf("--- Updated Student Marks ---\n");
 
 for (int i = 0; i < 15; i++) 
 {
    printf("Student %d: %d\n", i + 1, marks[i]);
 }


 printf("\n-----------------------------------\n");
 printf("New Class Average: %.2f\n", average);
 printf("Students with exactly 100 marks: %d\n", countExact100);
 printf("Range (Highest %d - Lowest %d): %d\n", highest, lowest, range);

 return 0;
}