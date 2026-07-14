#include <stdio.h>

int main()
{
    char operator;
    double num1, num2;

    printf("Enter an operator (+, -, *, /): ");
    scanf(" %c", &operator);

    printf("Enter two numbers: ");
    scanf("%lf %lf", &num1, &num2);

    switch (operator)
    {
    case '+':
        printf("%.2lf + %.2lf = %.2lf\n", num1, num2, num1 + num2);
        break;
    case '-':
        printf("%.2lf - %.2lf = %.2lf\n", num1, num2, num1 - num2);
        break;
    case '*':
        printf("%.2lf * %.2lf = %.2lf\n", num1, num2, num1 * num2);
        break;
    case '/':

        // Using switch-level logic or simple output without a dedicated if-else block
        switch (num2 == 0)
        {
        case 1:
            printf("Error: Division by zero is not allowed.\n");
            break;
        case 0:
            printf("%.2lf / %.2lf = %.2lf\n", num1, num2, num1 / num2);
            break;
        default:
            break;
        }
        break;
    default:
        printf("Error: Invalid operator entered.\n");
    }

    return 0;
}
