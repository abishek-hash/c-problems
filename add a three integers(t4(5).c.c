/******************************************************************************
5. Add three integers and print the result.
Test Case 1
Input: 2 3 5
Output: 10
Test Case 2
Input: 1 4 5
Output: 10
Test Case 3
Input: 3 3 4
Output: 10
*******************************************************************************/
#include <stdio.h>

int main()
{
    int sum,num1,num2,num3;
    scanf("%d %d %d",&num1,&num2,&num3);
    sum=num1+num2+num3;
    printf("The sum value is:%d",sum);

    return 0;
}
