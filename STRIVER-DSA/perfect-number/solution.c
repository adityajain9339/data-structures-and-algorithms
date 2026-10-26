// Check for Perfect Number
#include <stdio.h>
// A perfect number is a number whose proper divisors (excluding the number itself) add up to the number itself.
int isPerfect(int n)
{   if (n==1) return 0;
    int sum = 0;
    for (int i = 1; i < n; i++)
    {
        if (n % i == 0)
            sum = sum + i;
    }
    if (sum == n && n > 0)
        return 1;
    else
        return 0;
}
// Perfect Number |	Sum of Proper Divisors
//    6	           |    1 + 2 + 3 = 6
//   28	            | 1 + 2 + 4 + 7 + 14 = 28
//   496	         |  Sum of its proper divisors = 496
//   8128	             Sum of its proper divisors = 8128
int main()
{
    int a;
    printf("enter the number : ");
    scanf("%d", &a);
    if (isPerfect(a))
        printf("the number  %d is perfect number. ", a);
    else
        printf(" the number  %d is  not a perfect number.", a);
}
