#include <stdio.h>
#include <math.h>
#include <string.h>
int min(int nums[], int n)
{
    int mi = nums[0];
    for (int i = 1; i < n; i++)
    {
        if (nums[i] < mi)
        {
            mi = nums[i];
        }
    }
    return mi;
}
int max(int nums[], int n)
{
    int ma = nums[0];
    for (int i = 1; i < n; i++)
    {
        if (nums[i] > ma)
        {
            ma = nums[i];
        }
    }
    return ma;
}
int main()
{

    int n;
    printf("enter the legnth of the array\n");
    scanf("%d", &n);
    int arr[n];

    for (int i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }
    printf("min of array is %d\n", min(arr, n));
    printf("max of array is %d\n", max(arr, n));

    return 0;
}