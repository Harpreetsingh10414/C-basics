#include <stdio.h>

int main()
{
    char ch;
    printf("Enter any alphabet from a, b, c -> ");
    scanf("%c", &ch);

    switch (ch)
    {
    case 'a':
    case 'A':
        printf("\nYou entered A");
        break;

    case 'b':
    case 'B':
        printf("\nYou entered B");
        break;

    case 'c':
    case 'C':
        printf("\nYou entered C");
        break;

    default:
        printf("\nwish you know what are alphabets");
    }
    return 0;
}