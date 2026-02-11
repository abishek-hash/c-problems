/******************************************************************************
Check Leap Year
Input: 2024
Output: Leap year
Explanation: Leap year if divisible by 4 and not by 100, or divisible by 400
*******************************************************************************/
#include <stdio.h>

int main()
{
    int n;
    printf("Enter a Leap year:);
    scanf("%d",&n);
    if(n%4==0 && n%100!=0 ||n%400==0)
     printf("Leap Year");
    else 
     printf("Not an Leap Year");
    

    return 0;
}