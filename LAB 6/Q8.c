#include <stdio.h>
int main() 
{
 int seats[15] = {1, 0, 1, 0, 0, 1, 1, 0, 0, 0, 1, 0, 1, 0, 0};
 int bookedCount = 0, emptyCount = 0;
 int firstAvailable = -1, lastAvailable = -1;


 for (int i = 0; i < 15; i++) 
 {
    if (seats[i] == 1) 
    {
        bookedCount++;
    } 
    else
    {
        emptyCount++;
        if (firstAvailable == -1) 
        {
        firstAvailable = i + 1;
        }
        lastAvailable = i + 1;
    }
 }

 printf("Total Booked Seats: %d\n", bookedCount);
 printf("Total Empty Seats: %d\n", emptyCount);
 printf("First Available Seat: Seat %d\n", firstAvailable);
 printf("Last Available Seat: Seat %d\n", lastAvailable);


 int bookedSoFar = 0;


 for (int i = 0; i < 15; i++) 
 {
    if (seats[i] == 0 && bookedSoFar < 3) 
    {
        seats[i] = 1;
        bookedSoFar++;
    }
 }

    
 printf("\n--- Final Seating Chart ---\n");
 for (int i = 0; i < 15; i++) 
 {
    printf("Seat %d: %s\n", i + 1, (seats[i] == 1 ? "Booked" : "Empty"));
 }

 
 return 0;
}