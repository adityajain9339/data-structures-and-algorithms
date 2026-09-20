#include <stdio.h>
#include <stdbool.h>

// Function to calculate x raised to the power y
int power(int x, int y)
{
    if (y == 0)
        return 1;

    if (y % 2 == 0)
        return power(x, y / 2) * power(x, y / 2);

    return x * power(x, y / 2) * power(x, y / 2);
}

// Function to count the number of digits
int order(int n)
{
    int t = 0;

    while (n)
    {
        t++;
        n = n / 10;
    }

    return t;
}

// Function to check whether the number is Armstrong
bool armstrong(int n)
{
    int x = order(n);
    int temp = n;
    int sum = 0;

    while (temp)
    {
        int r = temp % 10;
        sum += power(r, x);
        temp = temp / 10;
    }

    return (sum == n);
}

int main()
{
    int n = 153;

    if (armstrong(n))
    {
        printf("true");
    }
    else
    {
        printf("false");
    }

    return 0;
}