#include <stdio.h>
int main() 
{
 int stock[10]   = {80, 15, 50, 5,  40, 12, 90, 8,  60, 25};
 int minimum[10] = {70, 30, 50, 25, 30, 20, 85, 40, 50, 50};

 int totalReorderQuantity = 0;
 int maxGap = 0;
 int largestReorderIndex = -1;

 printf("--- Products Needing Reorder ---\n");

 for (int i = 0; i < 10; i++) 
 {
    if (stock[i] < minimum[i]) 
    {
        int reorderAmount = minimum[i] - stock[i];
        totalReorderQuantity += reorderAmount;

        printf("Product Index %d: Needs %d units reordered.\n", i, reorderAmount);

        if (reorderAmount > maxGap) 
        {
            maxGap = reorderAmount;
            largestReorderIndex = i;
        }
    }
 }

    printf("\n-----------------------------------\n");
    if (largestReorderIndex != -1) 
    {
        printf("Product needing largest reorder: Index %d (%d units)\n", largestReorderIndex, maxGap);
    } 
    else 
    {
        printf("No products need reordering.\n");
    }
    printf("Total reorder quantity across all products: %d units\n", totalReorderQuantity);

 return 0;
}