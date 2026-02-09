/*****************************************************************************
7. Print a string along with a number
Test Case 1
Output: Age: 20
Test Case 2
Output: Count: 5

****************************************************************************/
#include <stdio.h>
int main()
{
    int age;
    int count;
    scanf("%d\n%d",&age,&count);
    if (age==20){
      printf("Age is %d\n",age);
    }
    else if(count==5){
      printf("Count is %d\n",count);
    }
    else{
      printf("Invalid Condition");
    }
    return 0;
}