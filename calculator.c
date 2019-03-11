#include <stdio.h>
/*
Author : Razin AhmEd.
purpose: Practice.

*/
void main()
{
    //Declaring Variables
    char op;
    //Taking values from user
    double num1,num2;printf("Enter First Number :");
    scanf("%lf",&num1);

    printf("Enter Second Number :");
    scanf(" %lf",&num2);

    printf("Enter An Operator (+,-,*,/) :");
    scanf(" %c",&op);
    //Counting the values taken from user
   switch(op)
    {
        case '+':
            printf("%.1lf + %.1lf = %.1lf",num1, num2, num1 + num2);
            break;

        case '-':
            printf("%.1lf - %.1lf = %.1lf",num1, num2, num1 - num2);
            break;

        case '*':
            printf("%.1lf * %.1lf = %.1lf",num1, num2, num1 * num2);
            break;

        case '/':
            printf("%.1lf / %.1lf = %.1lf",num1, num2, num1 / num2);
            break;
        //If the operator is invalid
        default:
            printf("Error! operator is not correct");
    }

    return 0;
}
