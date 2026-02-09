/******************************************************************************
8. Print output in two lines using \n
Test Case 1
Output:
Hello
World
Test Case 2
Output:
Good
Morning
*******************************************************************************/
#include <stdio.h>

int main()
{
    char a[10];
    char b[10];
    scanf("%s\n%s",&a,&b);
    printf("%s\n%s",a,b);
    
    return 0;
}
