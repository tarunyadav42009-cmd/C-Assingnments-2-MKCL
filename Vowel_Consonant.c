#include <stdio.h>

int main()
{
    char ch;

    printf("Enter any alphabet character: ");
    scanf(" %c", &ch);

    switch (ch)
    {
    case 'a':
    case 'e':
    case 'i':
    case 'o':
    case 'u':
    case 'A':
    case 'E':
    case 'I':
    case 'O':
    case 'U':
        printf("%c is a VOWEL.\n", ch);
        break;
    default:
        printf("%c is a CONSONANT.\n", ch);
    }

    return 0;
}
