#include <stdio.h>
#include <math.h>
#include <string.h>

int palindrome(char st[]) // UNLIKE ARRAY WHERE length()function not prersent strlen()
                          // present in no need to take legnth as argument
{
    int sta = 0, end = strlen(st) - 1;
    while (sta < end)
    {
        if (st[sta] != st[end])
        {
            return 0;
        }
        sta++;
        end--;
    }
    return 1;
}

int main()
{
    int n = 10;

    char st[n]; // while initialising array or  string u have to five legnth if u are not declaring
    printf("enter the string\n");
    //  scanf("%s", st);
    fgets(st, n, stdin); // next line
    puts(st);            // next line unlike print

    int status = palindrome(st);
    printf("the status is %d", status);

    return 0;
}