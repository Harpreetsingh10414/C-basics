#include <stdio.h>

int main()
{
    int n, x, k, frequency[9], flag = 0;
    printf("Enter any number -> ");
    scanf("%d", &n);

    x = n;
    for (int i = 0; i <= 10; i++)
    {
        frequency[i] = 0;
    }
    while (n > 0)
    {
        k = n % 10;
        frequency[k]++;
        n /= 10;
    }
    for (int i = 0; i < 10; i++)
    {
        if (frequency[i] > 1)
        {
            flag = 1;
            printf("\n%d --> repeated %d times \n", i, frequency[i]);
        }
    }
    if (flag == 0)
    {
        printf("\nNo Repeated Digits \n");
    }
    else
    {
        printf("\nRepeated digits are there\n");
    }
    return 0;
}