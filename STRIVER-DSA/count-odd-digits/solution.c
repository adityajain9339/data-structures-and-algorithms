#include<stdio.h>

int countOddDigit(int n) {
    int count = 0;

    while (n > 0) {
        if (n % 10 % 2 != 0) {
            count++;
        }
        n = n / 10;
    }

    return count;
}
int main(){
    int a ;
    printf("Gave me the number : ");
    scanf("%d", &a);
    printf("The count number is %d \n", countOddDigit(a));
}
