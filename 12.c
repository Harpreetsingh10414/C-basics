#include <stdio.h>

int main()
{
    int a, b;
    printf("Enter value of 'a' : \n");
    scanf("%d", &a);

    printf("Enter value of 'b' : \n");
    scanf("%d", &b);

    printf("Before Swapping value of 'a' is %d and 'b' is %d \n", a, b);

    a = a + b;
    b = a - b;
    a = a - b;

    printf("After Swapping value of 'a' is %d and 'b' is %d \n", a, b);
    return 0;
}