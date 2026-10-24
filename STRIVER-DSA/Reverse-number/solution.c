#include <stdio.h>
int reverseNumber(int n)
{
    int num = 0;
    while (n > 0)
    {
        num = num * 10 + n % 10;
        n = n / 10;
    }
    return num;
}
int main(){
    int a ;
    printf("Gave me the number : ");
    scanf("%d", &a);
    printf("The count number is %d \n", reverseNumber(a));
}