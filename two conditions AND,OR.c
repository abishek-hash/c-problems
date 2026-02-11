/******************************************************************************
 Check two conditions using AND and OR.
Test Case 1
Input: 5 10
Output: 1
Test Case 2
Input: 0 5
Output: 1
Test Case 3
Input: 0 0
Output: 0
*******************************************************************************/
#include <stdio.h>

int main()
{
    int num1,num2;
    scanf("%d %d",&num1,&num2);
    printf("%d",num1&&num2||num1||num2);


    return 0;
}
