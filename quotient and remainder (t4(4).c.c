/******************************************************************************
4. Print quotient and remainder of two integers.
Test Case 1
Input: 9 2
Output: Quotient=4 Remainder=1
Test Case 2
Input: 10 3
Output: Quotient=3 Remainder=1
Test Case 3
Input: 20 4
Output: Quotient=5 Remainder=0

*******************************************************************************/
#include <stdio.h>

int main()
{
    int quo,rem,num1,num2;
    scanf("%d %d",&num1,&num2);
    quo=num1/num2;
    rem=num1%num2;
    printf("The Quotient is:%d ",quo);
    printf("The Remainder is:%d",rem);

    return 0;
}
