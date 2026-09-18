//Reverse Integer
// Input: n = 122
// Output: 221
// Explanation: By reversing the digits of number, number will change into 221.

// Input: n = 200
// Output: 2
// Explanation: By reversing the digits of number, number will change into 2.

// Input: n = 12345 
// Output: 54321
// Explanation: By reversing the digits of number, number will change into 54321.
#include<stdio.h>
int reverse_int(int num );
int main(){
    int number_input;
    printf("enter the number : \n");
    scanf("%d", &number_input);

    int reverse_output = reverse_int(number_input);
    printf("The number you enter = %d and the number that is reverse is = %d",number_input,reverse_output );
}
int reverse_int(int num ){
    int output =0 ;
    int sign = 1;
    if (num < 0) {
        sign = -1;
        num = -num;
    }
    while (num > 0) {
        output = output * 10 + num % 10;
        num = num / 10;
    }
    return output * sign;
}
// Time Complexity - O(log n)
// Space Complexity - O(1)

// there is another approch is that interger to string and reverse that string and when reverse is compleate then converte them again to the integer
// integer
//    ↓
// string
//    ↓
// reverse string
//    ↓
// integer
// ..................................................................................
// my approch is -->----------
// ------
// integer
//    ↓
// extract last digit using % 10
//    ↓
// build reversed number


// but there is problem in my code is that i actully cannot handell the negative number 
// i am think that i can do this
// -123
//  ↓
// remember it is negative
//  ↓
// reverse 123 → 321
//  ↓
// make result negative
//  ↓
// -321 
