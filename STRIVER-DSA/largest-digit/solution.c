#include <stdio.h>
//  Return the Largest Digit in a Number
// You are given an integer n. Return the largest digit present in the number.
int largestDigit(int n)
{
    int largest = n % 10;
    while (n > 0)
    {
        int temp = n % 10;
        if (temp > largest)
        {
            largest = temp;
        }
        n = n / 10;
    }
    return largest;
}
int main(){
    int a ;
    printf("Gave me the number : ");
    scanf("%d", &a);
    printf("The count number is %d \n", largestDigit(a));
}