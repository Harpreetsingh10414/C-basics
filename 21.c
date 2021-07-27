#include <stdio.h>

int main()
{
    int a, n, rev = 0, x;
    printf("Enter any number to check it is palindrome or not \n");
    scanf("%d", &n);
    a = n;
    while (n > 0)
    {
        x = n % 10;
        rev = rev * 10 + x;
        n = n / 10;
    }
    if (a == rev)
        printf("The given number %d is palindrome \n", a);
    else
        printf("The given number %d is not a palindrome \n", a);
    return 0;
}