#include <stdio.h>

int main()
{
    int sal, g;
    float bonus, fsal, extra;
    printf("Choose Your Gender \n1 -> Male\n2 -> Female\n");
    scanf("%d", &g);

    printf("Enter your Salary -> ");
    scanf("%d", &sal);

    if (sal < 10000)
    {
        extra = (sal * 0.02);
    }
    else if (sal >= 10000)
    {
        extra = 0;
    }
    else
    {
        printf("Invalid Input");
    }
    if (g == 1)
    {
        bonus = (sal * 0.05);
    }
    else if (g == 2)
    {
        bonus = (sal * 0.1);
    }
    else
    {
        printf("Invalid Input");
    }
    fsal = sal + bonus + extra;
    printf("Your salary is %d\nYour Bonus = %f\nExtra bonus = %f\n", sal, bonus, extra);
    printf("\nYour Final salary is -> %f", fsal);
    return 0;
}