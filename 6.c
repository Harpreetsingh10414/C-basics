#include <stdio.h>

int main()
{
    int i, j;
    for (i = 1; i <= 2; i++)
    {
        for (j = 1; j <= 2; j++) //after continue compiler start from here
        {
            if (i == j)
                continue;

            printf("%d %d\n", i, j);
        }
    }
    return 0;
}