// Check if the Number is Armstrong
#include <stdio.h>
// An armstrong number is a number which is equal to the sum of the digits of the number, raised to the power of the number of digits.

// int square(int n, int count)
// {
//     int num = 1;

//     while (count > 0)
//     {
//         num = num * n;
//         count--;
//     }

//     return num;
// }
// int isArmstrong(int n)
// {
//     int temp = n;
//     int b = n;
//     int num = 0;
//     int count = 0;

//     while (n > 0)
//     {
//         count++;
//         n = n / 10;
//     }

//     // Handle zero separately
//     if (temp == 0)
//     {
//         return 1; // true :
//     }

//     while (b > 0)
//     {
//         int a = b % 10;
//         num = num + square(a, count);
//         b = b / 10;
//     }

//     return temp == num;
// }
// ....................................................................................
int power(int n, int count)
{
    int result = 1;

    while (count > 0)
    {
        result *= n;
        count--;
    }

    return result;
}

int  isArmstrong_obtimal(int n)
{
    if (n < 0)
    {
        return 0;// false: 
    }

    int temp = n;
    int count = 0;
    int sum = 0;

    int x = n;

    do
    {
        count++;
        x /= 10;
    } while (x > 0);

    while (n > 0)
    {
        int digit = n % 10;
        sum += power(digit, count);
        n /= 10;
    }

    return sum == temp;
}

int main()
{
    int a;
    printf("Gave me the number : ");
    scanf("%d", &a);
    if (isArmstrong_obtimal(a))
    {
        printf("You enter the armstrong number !!!...");
    }
    else
    {
        printf("you enter the not the armstrong number !!!...");
    }
}
