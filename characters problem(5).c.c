/******************************************************************************
5. Print a character
Test Case 1
Output: A
Test Case 2
Output: Z
*******************************************************************************/
#include <stdio.h>

int main()
{
    char ch1,ch2;
    printf("Enter a character:\n");
    scanf("%c\n%c",&ch1,&ch2);
    printf("your first character is:%c\n",ch1);
    printf("your Second character is:%c",ch2);
    return 0;
}
