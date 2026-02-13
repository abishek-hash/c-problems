/******************************************************************************
 Days in a Month
Input: 2
Output: 28 or 29 days
Explanation: February has 28 or 29 days
*******************************************************************************/
#include <stdio.h>
int main()
{
    int Month;
    scanf("%d",&Month);
    switch(Month){
    case 1:
     printf("January");
    break;
    case 2:
     printf("February has 28 days or 29 days ");
    break;
    case 3:
     printf("March");
    break;
    case 4:
     printf("April");
    break;
    case 5:
     printf("May");
    break;
    case 6:
     printf("June");
    break;
    case 7:
     printf("July");
    break;
    case 8:
     printf("August");
    break;
    case 9:
     printf("September");
    break;
    case 10:
     printf("October");
    break;
    case 11:
     printf("November");
    break;
    case 12:
     printf("December");
    break;
    default:
     printf("Invalid Condition");
    }
    return 0; 
}