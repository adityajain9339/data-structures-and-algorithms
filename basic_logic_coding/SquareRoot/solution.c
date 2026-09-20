#include <stdio.h>

// Naive Approach] Using a loop - O(sqrt(n)) Time and O(1) Space
// Start from 1 and square each number until the square exceeds the given number. 
// The last number whose square is less than or equal to n is the answer.

int floorSqrt(int n) {
    
    // start iteration from 1 until the 
    // square of a number exceeds n
    int res = 1;
    while (res * res <= n) {
        res++;
    }
    
    // return the largest integer whose 
    // square is less than or equal to n
    return res - 1;
}

int main() {
    int n = 11;
    printf("%d", floorSqrt(n));
    return 0;
}