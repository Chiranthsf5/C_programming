#include <stdio.h>
#include <math.h>

int occur(int a, int b)
{
    int c = 0;

    while (a > 0)
    {
        int r = a % 10;
        if (b == r)
        {
            c++;
        }

        a = a / 10;
    }
    return c;
}

int main()
{
    int a, b;
    printf("enter big number and target number:");
    scanf("%d%d", &a, &b);
    printf("target ocuurs %d times", occur(a, b));
    return 0;
}