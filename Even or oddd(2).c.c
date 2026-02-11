/******************************************************************************
Check Even or Odd
Input: 7
Output: Odd number
Explanation: If num % 2 == 0, it’s even; otherwise odd.
*******************************************************************************/
#include <stdio.h>

int main()
{
    int n;
    scanf("%d",&n);
    if(n%3==0)
      printf("Even");
    else 
      printf("Odd");
    return 0;
}