// 2. Use a switch statement to write a simple calculator: read two integers and an operator (+, - , *, /, %) and print the result.


#include<stdio.h>
int main (){

    int num1,num2;
    scanf("%d", &num1);
    scanf("%d", &num2);
    int op;
    scanf("%c", &op);

    switch (op){
        case '+':
            printf("Result = %d", num1 + num2);
            break;

        case '-':
            printf("Result = %d", num1 - num2);
            break;

        case '*':
            printf("Result = %d", num1 * num2);
            break;

        case '/':
            printf("Result = %d", num1 / num2);
            break;

        case '%':
            printf("Result = %d", num1 % num2);
            break;
    }

    return 0;
}