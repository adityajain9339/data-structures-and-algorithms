// GCD of Two Numbers
#include <stdio.h>
// You are given two integers n1 and n2. You need find the Greatest Common Divisor (GCD) of the two given numbers. Return the GCD of the two numbers.

// The Greatest Common Divisor (GCD) of two integers is the largest positive integer that divides both of the integers

int GCD(int n1, int n2)
{
    int limit;

    if (n1 < n2)
        limit = n1;
    else
        limit = n2;

    int temp = 1;

    for (int i = 1; i <= limit; i++)
    {
        if (n1 % i == 0 && n2 % i == 0)
        {
            temp = i;
        }
    }

    return temp;
}
// A more efficient approach is the Euclidean algorithm, which repeatedly uses the remainder operation.
int GCD_Obtimal(int n1, int n2)
{
    while (n2 != 0)
    {
        int temp = n2;
        n2 = n1 % n2;
        n1 = temp;
    }

    return n1;
}


int main()
{
    int a, b ;
    printf("enter the number 1 : ");
    scanf("%d", &a);
    printf("enter the number 2 : ");
    scanf("%d", &b);
    printf("the gcd of the two number is - %d", GCD(a, b));
}