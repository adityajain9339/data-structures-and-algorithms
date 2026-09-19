#include <stdio.h>
int palindrome_number(int num)
{
    int output = 0;
    int num_copy = num;
    int sign = 1;
    if (num < 0)
    {
        sign = -1;
        num = -num;
    }
    while (num > 0)
    {
        output = output * 10 + num % 10;
        num = num / 10;
    }
    int return_output = output * sign;
    if (return_output == num_copy)
        return 1;
    else    
        return 0;
}
int main()
{
    int number_input;
    printf("enter the number : \n");
    scanf("%d", &number_input);

    if (palindrome_number(number_input))
        printf("the number you enter is  %d palindrome number ", number_input);
    else
        printf("the number you enter is  %d  not palindrome number ", number_input);
}
