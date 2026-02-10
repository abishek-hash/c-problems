/******************************************************************************
Compare two numbers using >.
Test Case 1
Input: 10 5
Output: 1
Test Case 2
Input: 3 8
Output: 0
Test Case 3
Input: 7 7
Output: 0

*******************************************************************************/
#include <stdio.h>

int main()
{
    int num1,num2;
    scanf("%d %d",&num1,&num2);
    printf("%d",num1>num2);
    return 0;
}