#include <stdio.h>
// there are actually the there are two ways to solve this problem
// one is through recursion and one through itretive solution
int factorial_intrative(int num);
int factorial_recursive(int num);
int main()
{
    int number_input;
    printf("enter the number : ");
    scanf("%d", &number_input);

    int output = factorial_intrative(number_input);
    printf("\nthe output of the code through itrative : %d", output);

    output = factorial_recursive(number_input);
    printf("\nthe factorial through recurive: %d", output);
}
int factorial_intrative(int num)
{
    int product = 1;
    if (num < 0)
    {
        printf("the number must be postive !!!");
        return 0;
    }
    for (int i = 2; i <= num; i++)
    {
        product = product * i;
    }
    return product;
}
int factorial_recursive(int num)
{
    if (num < 0)
    {
        printf("the number must be postive !!!");
        return 0;
    }
    else
    {
        if (num == 1 || num == 0)
        {
            return 1;
        }
        else
        {
            return num * factorial_recursive(num - 1);
        }
    }
}
// Iterative Solution - O(n) Time and O(1) Space
// Recursive Solution - O(n) Time and O(n) Space
