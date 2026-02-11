/******************************************************************************
Use logical OR on two values.
Test Case 1
Input: 0 5
Output: 1
Test Case 2
Input: 0 0
Output: 0
Test Case 3
Input: 3 7
Output: 1
*******************************************************************************/
#include <stdio.h>

int main()
{
    int num1,num2;
    scanf("%d %d",&num1,&num2);
    printf("%d",num1||num2);
    return 0;
}
