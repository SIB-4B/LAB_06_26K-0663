#include <stdio.h>
#include <string.h>
#include <ctype.h>
int main() 
{
 char passwords[5][50] = 
 {
  "Pass123word",
  "abc",
  "SecureKey89!",
  "hello123",
  "SUPERSECRETKEY1"
 };

 char strongestPassword[50] = "";
 int highestScore = -9999;
 int belowTenCount = 0;

 for (int i = 0; i < 5; i++)
  {
    int score = 0;
    int len = strlen(passwords[i]);

    for (int j = 0; j < len; j++) 
    {
        if (islower(passwords[i][j])) 
        {
        score += 1;
        } 
        else if (isupper(passwords[i][j])) 
        {
        score += 2;
        } 
        else if (isdigit(passwords[i][j])) 
        {
        score += 3;
        }
    }

    if (len >= 8) 
    {
    score += 5;
    }


    if (strstr(passwords[i], "123") != NULL)
    {
    score -= 3;
    }

    printf("Password: %s | Score: %d\n", passwords[i], score);

    if (score > highestScore) 
    {
    highestScore = score;
    strcpy(strongestPassword, passwords[i]);
    }

    if (score < 10) 
    {
    belowTenCount++;
    }
 }

 printf("\n-----------------------------------\n");
 printf("Strongest Password: %s (Score: %d)\n", strongestPassword, highestScore);
 printf("Passwords with score below 10: %d\n", belowTenCount);

 return 0;
}