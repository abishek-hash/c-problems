/******************************************************************************
Largest of Three Numbers
Input: 10 25 15
Output: 25 is largest
Explanation: Compare all three using if-else if
*******************************************************************************/
#include <stdio.h>

int main()
{
    int num1,num2,num3;
    scanf("%d %d %d",&num1,&num2,&num3);
    if(num1>num2 && num1>num3)
     printf(" %d is greatest",num1);
    else if(num2>num1 &&num2>num3 )
     printf(" %d is greatest",num2);
    else if (num3>num2 && num3>num1 )
     printf("%d is greatest",num3);
    else
     printf("Invalid conditon");

    return 0;
}
