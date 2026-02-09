/******************************************************************************
4. Print a floating-point number
Test Case 1
Output: 3.5
Test Case 2
Output: 7.25
*******************************************************************************/
#include <stdio.h>

int main()
{
    float num1,num2;
    printf("Enter a float Number:\n");
    scanf("%f\n%f",&num1,&num2);
    printf("The float Number is:%.1f\n",num1);
    printf("The float Number is:%.2f",num2);
    

    return 0;
}
