#include <stdio.h>

int main()
{
    int x, y;
    printf("Enter value of X : ");
    scanf("%d", &x);
    y = (x > 5 ? 3 : 4);
    printf("The value of Y is : %d", y);
    return 0;
}