#include <stdio.h>

int main()
{
    int a, n, rev = 0, x;
    printf("Enter a number \n");
    scanf("%d", &n);

    a = n;
    while (n > 0)
    {
        x = n % 10;
        rev = rev * 10 + x;
        n = n / 10;
    }
    printf("The reverse of %d is %d\n", a, rev);
    return 0;
}