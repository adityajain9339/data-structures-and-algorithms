#include<stdio.h>
void pattern1(int n ){
// *****
// *****
// *****
// *****
// *****
    for(int i =0 ; i<n ;i++){
        for(int j =0; j<n ; j++){
            printf("*");
        }
        printf("\n");
    }
//  Time and space complexity
// - Time complexity: O(n²), because the inner loop runs n times for each of the n rows.
// - Auxiliary space complexity: O(1), because the program uses only a constant amount of extra memory.
// Mental model to remember
// - Outer loop = Rows
// - Inner loop = Stars in each row
// - Newline = Move to the next row
}
void pattern2( int n ){
    for(int i =0 ; i<n ; i++){
        for(int j =0 ; j<=i; j++){
            printf("*");
        }
        printf("\n");
    }
}
int main (){
    int n ;
    printf("enter the number: ");
    scanf("%d", &n);
    pattern2(n);
}