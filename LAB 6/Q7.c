#include <stdio.h>
int main() 
{
 int refNumber;
 printf("Enter document reference number: ");
 scanf("%d", &refNumber);
 int original = refNumber;
 int reversed = 0;
 int temp = refNumber;

 while (temp > 0) 
 {
    int lastDigit = temp % 10;
    reversed = (reversed * 10) + lastDigit;
    temp /= 10;
 }

 printf("Original: %d\n", original);
 printf("Reversed: %d\n", reversed);

 if (original == reversed) 
 {
    printf("Palindrome Confirmed\n");
 } 
 else 
 {
    printf("Not a Palindrome\n");
 }

 return 0;
}