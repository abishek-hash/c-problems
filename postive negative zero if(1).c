/******************************************************************************
Check Positive, Negative, or Zero
Input: 5
Output: Positive number
Explanation: If number > 0 → positive, < 0 → negative, else zero
*******************************************************************************/
#include <stdio.h>

int main()
{
    int num;
    scanf("%d",&num);
    if(num>0)
     printf("It is a Postive",num);
    else if(num<0)
     printf("It is Negative",num);
    else if(num==0)
     printf("It is Zero",num);
    else
     printf("It is Invalid Condition");

    return 0;
}