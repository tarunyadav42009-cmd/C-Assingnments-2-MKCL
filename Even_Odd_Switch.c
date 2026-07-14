#include <stdio.h>

int main()
{
    int num;

    printf("Enter an integer: ");
    scanf("%d", &num);

    switch (num % 2)
    {
    case 0:
        printf("%d is EVEN.\n", num);
        break;
    default:
        printf("%d is ODD.\n", num);
    }

    return 0;
}
