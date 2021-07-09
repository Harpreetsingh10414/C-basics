#include <stdio.h>

int main()
{
    int i;
    printf("For capital letters (A-Z) press ' 1 '\nFor small letters (a-z) press ' 2 ' -> ");
    scanf("%d", &i);

    switch (i)
    {
    case 1:
        for (int a = 65; a <= 90; a++)
        {
            printf("%c\n", a);
        }
        break;

    case 2:
        for (int a = 97; a <= 122; a++)
        {
            printf("%c\n", a);
        }
        break;

    default:
        printf("\t\t! ! ! ! Invalid Input ! ! ! ! ");
    }
    printf("\n\tTHANK YOU");
    return 0;
}