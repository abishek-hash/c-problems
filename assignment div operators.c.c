/******************************************************************************
5. Use /= and %= operators.
Test Case 1
Input: 9 2
Output: 4 1
Test Case 2
Input: 10 5
Output: 2 0
Test Case 3
Input: 7 3
Output: 2 1
*******************************************************************************/
#include <stdio.h>

int main()
{
    int x,y;
    scanf("%d %d",&x,&y);
    x/=y;
    printf("%d %d",x);
    return 0;
}
