/******************************************************************************
Decrement a variable twice and print result.
Test Case 1
Input: 6
Output: 4
Test Case 2
Input: 2
Output: 0
Test Case 3
Input: 10
Output: 8
*******************************************************************************/
#include <stdio.h>

int main()
{
    int a,b;
    b=a;
    printf("Enter a value:");
    scanf("%d",&b);
    printf("%d",--b,--b);

    return 0;
}
