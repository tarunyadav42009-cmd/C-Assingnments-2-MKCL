#include <stdio.h>

int checkPrimeNumber(int n)
{
    int j, flag = 1;

    if (n <= 1)
    {
        return 0;
    }

    for (j = 2; j <= n / 2; ++j)
    {
        if (n % j == 0)
        {
            flag = 0;
            break;
        }
    }

    return flag;
}

int main()
{
    int i, n1, n2, flag;

    printf("Enter two positive integers (intervals): ");
    scanf("%d %d", &n1, &n2);

    // Swaping numbers if n1 is greater than n2
    if (n1 > n2)
    {
        int temp = n1;
        n1 = n2;
        n2 = temp;
    }

    printf("Prime numbers between %d and %d are: ", n1, n2);

    for (i = n1 + 1; i < n2; ++i)
    {
        // If i is a prime number, flag will be 1
        flag = checkPrimeNumber(i);

        if (flag == 1)
        {
            printf("%d ", i);
        }
    }

    printf("\n");
    return 0;
}
