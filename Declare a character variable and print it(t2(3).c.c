/******************************************************************************
4. Declare a character variable and print it
Test Case 1
 Input: X
 Output: X
Test Case 2
 Input: B
 Output: B


*******************************************************************************/
#include <stdio.h>

int main()
{
   char AB,CD;
   printf("Enter a two Character:\n");
   scanf("%c\n%c",&AB,&CD);
   printf("The 1st character is:\n%c\n%c",AB);
   printf("The 2nd character is:\n%c",CD);

    return 0;
}