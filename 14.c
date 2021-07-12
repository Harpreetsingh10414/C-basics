#include <stdio.h>

int main()
{
    int a, b, c;
    printf("Enter 1st number ->\n");
    scanf("%d", &a);

    printf("Enter 2nd number ->\n");
    scanf("%d", &b);

    printf("Enter 3rd number ->\n");
    scanf("%d", &c);

    if ((a > b) && (a > c))
    {
        printf("1st number is greatest %d", a);
    }
    else if ((b > a) && (b > c))
    {
        printf("2nd number is greatest %d", b);
    }
    else
        printf("3rd number is greatest %d", c);

    return 0;
}