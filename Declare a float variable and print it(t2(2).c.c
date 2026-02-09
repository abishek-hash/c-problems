/******************************************************************************
3. Declare a float variable and print it
Test Case 1
 Input: 2.5
 Output: 2.5
 
Test Case 2
 Input: 6.75
 Output: 6.75



*******************************************************************************/
#include <stdio.h>

int main()
{
    float a,b ;
    printf("Enter a two float value:\n");
    scanf("%f\n%f",&a,&b);
    printf("The 1st float value is:%.1f\n",a);
    printf("The 2nd float value is:%.1f",b);
    
    return 0;
}
