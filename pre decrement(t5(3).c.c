/******************************************************************************
 Apply pre-decrement to a variable.
Test Case 1
Input: 10
Output: 9
Test Case 2
Input: 1
Output: 0
Test Case 3
Input: 5

*******************************************************************************/
#include <stdio.h>

int main()
{
    int a,b;
    b=a;
    printf("Enter a value:");
    scanf("%d",&b);
    printf("%d",--b);

    return 0;
}
