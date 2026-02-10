/******************************************************************************
1. Apply pre-increment to a variable.
Test Case 1
Input: 5
Output: 6
Test Case 2
Input: 10
Output: 11
Test Case 3
Input: 0
Output: 1
*******************************************************************************/
#include <stdio.h>

int main()
{
    int a,b;
    b=++a;
    scanf("%d",&b);
    printf("%d",++b);

    return 0;
}
