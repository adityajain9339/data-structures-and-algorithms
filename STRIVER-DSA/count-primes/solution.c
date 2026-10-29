//  Count of Prime Numbers till N
#include <stdio.h>
// You are given an integer n.
// You need to find out the number of prime numbers in the range [1, n] (inclusive).
//  Return the number of prime numbers in the range.
// A prime number is a number which has no divisors except, 1 and itself.
// Constraints:
// 2 <= n <= 1000
int primeUptoN(int n)
{
    int count = 0;

    for (int num = 2; num <= n; num++)
    {
        int isPrime = 1;

        for (int i = 2; i * i <= num; i++)
        {
            if (num % i == 0)
            {
                isPrime = 0;
                break;
            }
        }

        if (isPrime)
        {
            printf("the number is - %d\n", num);
            count++;
        }
    }

    return count;
}

int main()
{   int a ;
    printf("enter the number : ");
    scanf("%d",&a);
    printf("the prime number upto n is -  %d\n ",primeUptoN(a) );
}