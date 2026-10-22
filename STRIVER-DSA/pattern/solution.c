#include <stdio.h>
void pattern1(int n)
{
    // *****
    // *****
    // *****
    // *****
    // *****
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
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
void pattern2(int n)
{
    // *

    // **

    // ***

    // ****

    // *****
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j <= i; j++)
        {
            printf("*");
        }
        printf("\n");
    }
    // Time and space complexity
    // - Time complexity: O(n²)
    // - Auxiliary space complexity: O(1)
    // Mental model to remember
    // Outer loop = Rows; inner loop = Stars.

    // The key condition is j <= i, which makes the number of stars increase by one in every new row.
}
void pattern3(int n)
{
    // 1

    // 12

    // 123

    // 1234

    // 12345
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j <= i; j++)
        {
            printf("%d", j + 1);
        }
        printf("\n");
    }
    // Time and Space Complexity
    // Time Complexity: O(n²)

    // The inner loop runs 1, 2, 3, ..., n times.

    // Total number of printed digits:

    // 1 + 2 + 3 + ... + n = n(n + 1)/2

    // Therefore, time complexity is O(n²).

    // Auxiliary Space Complexity: O(1)

    // Only the loop variables i and j are used. No extra array or data structure is created.
    // // 4. Mental Model to Remember
    // Outer loop = Rows

    // Inner loop = Numbers in each row

    // j + 1 = Number to print

    // Example for n = 4:
    // - Row 1 → 1 (one number)
    // - Row 2 → 12 (two numbers)
    // - Row 3 → 123 (three numbers)
    // - Row 4 → 1234 (four numbers)
    // Memory trick: j starts at 0, so use j + 1 to print numbers starting from 1.
}
void pattern5(int n)
{
    // *****

    // ****

    // ***

    // **

    // *

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n - i; j++)
        {
            printf("*");
        }
        printf("\n");
    }
    // for (int i = 1; i < n; i++)
    // {
    //     for (int j = 0; j < n - i + 1; j++)
    //     {
    //         printf("*");
    //     }
    //     printf("\n");
    // }
    // Time Complexity
    // Time Complexity: O(n²)
    // Space Complexity
    // Auxiliary Space Complexity: O(1)

    // Reason: The program uses only two loop variables, i and j. It does not create any extra array or data structure.
    // Remember these 3 rules:
    // - Outer loop (i) = Rows
    // - Inner loop (j) = Stars
    // - n - i = Stars decrease by 1 in each row

    // Quick memory trick
    // Pattern	         Inner loop condition	                      Result
    // Increasing	       j < i + 1	                           1, 2, 3, 4, 5 stars
    // Decreasing	       j < n - i	                           5, 4, 3, 2, 1 stars
}
int main()
{
    int n;
    printf("enter the number: ");
    scanf("%d", &n);
    pattern3(n);
}