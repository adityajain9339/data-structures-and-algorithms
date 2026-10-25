// Factorial of a given number
#include <stdio.h>
// Factorial of a number is the product of all positive integers less than or equal to that number.
int factorial(int n)
{
    if (n == 0 || n == 1)
        return 1;
    else
    {
        return n * factorial(n - 1);
    }
}
int factorialItrative(int n)
{   int num = 1;
    unsigned long long factorial = 1;

    if (n < 0)
    {
        printf("Factorial is not defined for negative numbers.\n");
    }
    else
    {
        for (int i = 1; i <= n; i++)
        {
            num = num * i;
        }
    }
    return num;
}
int main()
{
    int a = 0;
    printf("enter the number : ");
    scanf("%d", &a);

    printf("The factorial of the number %d id %d \n", a, factorialItrative(a));
}