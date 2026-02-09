/**************************************************
5. Change variable value and print updated value
Test Case 1
Input: 10 → 20
Output: 20
Test Case 2
Input: 50 → 100
Output: 100
 **************************************************/


#include <stdio.h>
int main()
{
    int a,b;
    a=10;
    b=50;
    scanf("%d\n%d",&a,&b);
    printf("The updated value is 10 into 20\n",a);
    printf("The updated value is 50 into 100",b);
    return 0;
}