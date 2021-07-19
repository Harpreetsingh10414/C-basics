#include <stdio.h>

int main()
{
    int n, sum = 0;
    printf("Enter number to print sum \n");
    scanf("%d", &n);

    for (int i = 0; i <= n; i++)
    {
        sum = sum + i;
    }
    printf("\nSum of numbers -> %d", sum);
    return 0;
}