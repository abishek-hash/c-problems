/******************************************************************************
 Voting Eligibility
Input: 18
Output: Eligible to vote
Explanation: Age ≥ 18 → eligible
*******************************************************************************/
#include <stdio.h>

int main()
{
    int num;
    scanf("%d",&num);
    if(num>=18 && num==18 )
     printf("Eligible for voting");
    else if(num<18)
     printf("Not Eligibel for voting");
    else
     printf("Invalid Condition");

    return 0;
}
