#include <iostream>
using namespace std;

bool isPalindrome(int n)
{
    int reverse = 0;
    int temp = n;
    int sign =1;
    if (n < 0)
    {
        sign = -1;
        n = -n;
    }
    while (temp != 0)

    {
        reverse = (reverse * 10) + (temp % 10);
        temp = temp / 10;
    }
    return (reverse == n * sign); // actullay in c++ there is the bool where if the return condition is true then return 1 other wise condition is false then return 0;
}

int main()
{
    int number_input;
    cout << "enter the number that you wnat to cheak the palindrom ";
    cin >> number_input;
    if (isPalindrome(number_input))
    {
        cout << "the number you enter is " << number_input << " is palindrome";
    }
    else
    {
        cout << "the number you enter is " << number_input << " is not palindrome";
    }
    return 0;
}