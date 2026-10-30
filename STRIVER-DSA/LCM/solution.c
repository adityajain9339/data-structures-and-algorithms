// LCM of two numbers
#include <stdio.h>
// You are given two integers n1 and n2. You need find the Lowest Common Multiple (LCM) of the two given numbers. Return the LCM of the two numbers.

// The Lowest Common Multiple (LCM) of two integers is the lowest positive integer that is divisible by both the integers.
int LCM(int n1, int n2)
{

    int i = (n1 > n2) ? n1 : n2;

    while (1)
    {
        if((n1==0 || n2==0)){// handel all the zero input !!..
            return 0;
        }
        
        if (i % n1 == 0 && i % n2 == 0)
        {
            return i;
        }


        i++;
    }
}
int main(){
    int a, b ;
    printf("enter the number 1 : ");
    scanf("%d", &a);
    printf("enter the number 2 : ");
    scanf("%d", &b);
    printf("the lcm of the two number is - %d", LCM(a, b));

}
// Complexity analysis
// Let M = max(n1, n2).
// - Time Complexity: O(LCM(n1, n2) - M + 1)
// - Space Complexity: O(1)