#include <stdio.h>

int main()
{
    int n, sum = 0, a, x;
    printf("Enter any number \n");
    scanf("%d", &n);

    a = n;
    while (n > 0)
    {
        x = n % 10;
        sum = sum + x;
        n = n / 10;
    }

    printf("\nSum od all digits of %d is %d", a, sum);
    return 0;
}