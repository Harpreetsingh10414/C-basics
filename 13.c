#include <stdio.h>

int main()
{
    int n, yrs, wek, day;
    printf("Enter number of days -> \n");
    scanf("%d", &n);

    yrs = n / 365;
    wek = (n % 365) / 7;
    day = (n % 365) % 7;

    printf("\n%d years %d weeks %d days", yrs, wek, day);
    return 0;
}