/******************************************************************************
Multiple of 3 and 7
Input: 21
Output: Multiple of both 3 and 7
Explanation: Condition: num % 3 == 0 && num % 7 == 0
*******************************************************************************/
#include <stdio.h>

int main()
{
    int a;
    scanf("%d",&a);
    if(a%3==0 && a%7==0)
     printf("It divides by both 3 and 7",a);
    else
     printf("It not divides by both");

    return 0;
}
