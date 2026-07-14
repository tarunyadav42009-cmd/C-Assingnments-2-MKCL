#include <stdio.h>

int main()
{
    char gender;

    printf("Enter gender (M/F): ");
    scanf(" %c", &gender);

    switch (gender)
    {
    case 'M':
    case 'm':
        printf("Male\n");
        break;
        
    case 'F':
    case 'f':
        printf("Female\n");
        break;
    default:
        printf("Invalid input! Please enter M or F.\n");
    }

    return 0;
}
