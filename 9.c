#include <stdio.h>

int main()
{
    int i;
    printf("Enter number to check it is odd or even :\n");
    scanf("%d", &i);
    if (i % 2 == 0)
    {
        printf("\nThis is a Even number");
    }
    else if (i % 2 != 0)
    {
        printf("\nThis is a odd number");
    }
    else
    {
        printf("\nInvalid input");
    }
    return 0;
}