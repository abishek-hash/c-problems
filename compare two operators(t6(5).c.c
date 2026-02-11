/******************************************************************************
 Compare two numbers using >= and <=.
Test Case 1
Input: 5 5
Output: 1 1
Test Case 2
Input: 10 5
Output: 1 0
Test Case 3
Input: 3 7
Output: 0 1

*******************************************************************************/
#include <stdio.h>

int main()
{
    int a,b;
    scanf("%d %d",&a,&b);
    printf("%d %d",a>=b,a<=b);

    return 0;
}