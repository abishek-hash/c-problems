/******************************************************************************
2. Print float variable
Test Case 1
Output: 3.5
Test Case 2
Output: 8.25
******************************************************************************/
#include <stdio.h>

int main()
{

    float a,b;
    printf("Enter a float variable:\n");
    scanf("%f\n%f",&a,&b);
    printf("The float variable is:\n %.1f\n %.2f",a,b);
    return 0;
}
