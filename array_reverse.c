#include <stdio.h>
#include <math.h>
void reverse(int n, int nums[]) // while function call name with justr paranthesis
{
    int st = 0, end = n - 1;
    while (st < end)
    {
        int temp = nums[st];
        nums[st] = nums[end];
        nums[end] = temp;
        st++;
        end--;
    }
}
int main()
{
    int n = 10, arr[n]; // while declaring name paratheseis with length
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }
    reverse(n, arr); // while calling only name
    for (int i = 0; i < n; i++)
    {
        printf("array[%d] is %d\n", i, arr[i]);
    }
    return 0;
}