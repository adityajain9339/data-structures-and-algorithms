#include <stdio.h>
// A palindrome number is a number which reads the same both left to right and right to left.
int  isPalindrome(int n)
{
    int num = 0;
    int temp = n;
    while (n > 0)
    {
        num = num * 10 + n % 10;
        n = n / 10;
    }
    if (num == temp)
        return 1;
    else
        return 0;
}

int main()
{
    int a ;
    printf("Gave me the number : ");
    scanf("%d", &a);
    if(isPalindrome(a)){
        printf("You enter the palindrom number %d !!!...", a);
    }
    else{
        printf("you enter the not the palindrom number  %d !!!...", a);
    }
}
