#include <stdio.h>

int main()
{
    int a, b, c;
    printf("Enter value of 'a' \n");
    scanf("%d", &a);
    printf("Enter value of 'b' \n");
    scanf("%d", &b);

    printf("Before swapping value of 'a' is %d and value of 'b' is %d\n", a, b);
    c = a;
    a = b;
    b = c;
    printf("After swapping the value of 'a' is %d and value of 'b' is %d\n", a, b);
    return 0;
}