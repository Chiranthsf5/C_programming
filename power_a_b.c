
#include <stdio.h>
#include <math.h>

float power(int a, int b)
{
    if (b == 0)
        return 1;
    // return a * power(a, b - 1);reccursion//10*pow(10,2)
    // 10*10*pow(10,1)
    // 10*10*10*1=1000.00000
    return pow(a, b); // in built
}

int main()
{
    int a, b;
    printf("enter two numbers");
    scanf("%d%d", &a, &b);
    float power1 = power(a, b);
    printf("power of %d and %d = %f", a, b, power1);
    return 0;
}
