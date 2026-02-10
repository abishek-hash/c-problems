/******************************************************************************
2. Apply post-increment and print the value.
Test Case 1
Input: 5
Output: 5
Test Case 2

Input: 9
Output: 9
Test Case 3
Input: 0
Output: 0
*******************************************************************************/
#include <stdio.h>

int main()
{
    int a,b;
    b=a;
    printf("Enter a value:");
    scanf("%d",&b);
    printf("%d",b++);

    return 0;
}
