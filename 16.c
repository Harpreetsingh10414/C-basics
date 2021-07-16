#include<stdio.h>

int main()
{
    int n,a,multi;
    printf("Enter any number ");
    scanf("%d",&n);

    printf("  multiply by - ");
    scanf("%d",&a);

    for(int i=0;i<=a;i++)
    {
        multi+=n(i);
    }

    printf("\nMultiplication -> %d",multi);
    return 0;
}