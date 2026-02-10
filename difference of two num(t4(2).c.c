/******************************************************************************
2. Print the difference of two integers using -.
Test Case 1
Input: 8 3
Output: 5
Test Case 2
Input: 10 5
Output: 5
Test Case 3
Input: 15 10
Output: 5
*******************************************************************************/
#include <stdio.h>

int main()
{
   int sub,num1,num2;
   scanf("%d %d",&num1,&num2);
   sub=num1 - num2;
   printf("The difference  value is :%d ",sub);
    return 0;
}
