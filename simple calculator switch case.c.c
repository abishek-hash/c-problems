#include <stdio.h>

int main()
{
    int num1, num2,result;
    char op;

    scanf("%d %c %d", &num1, &op, &num2);

    switch(op){
        case '+':
           result=num1 + num2;
            break;

        case '-':
            result= num1 - num2;
            break;

        case '*':
            result = num1 * num2;
            break;

        case '/':
            if(num2 == 0)
                printf("Division by zero is not allowed");
            else
                printf("The division is %d", num1 / num2);
            break;

        default:
            printf("Invalid operator");
            return 0;
    }
printf("result = %d",result);
    return 0;
}
		