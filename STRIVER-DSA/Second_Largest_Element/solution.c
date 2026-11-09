#include <stdio.h>
//  Second Largest Element

// Given an array of integers nums, return the second-largest element in the array.
// If the second-largest element does not exist, return -1.

// Example 1:
// Input: nums = [8, 8, 7, 6, 5]

// Output: 7

// Explanation:

// The largest value in nums is 8, the second largest is 7

// Example 2:
// Input: nums = [10, 10, 10, 10, 10]

// Output: -1

// Explanation:

// The only value in nums is 10, so there is no second largest value, thus -1 is returned

// Input: nums = [7, 7, 2, 2, 10, 10, 10]----------> Ans - 7

int secondLargestElement(int arr[], int n)

{

    if (n < 2) {
        printf("Array must have at least two elements.\n");
        return -1;
    }

    int largest = arr[0];
    int secondLargest = -15000000; // Initialize with a very small value (or INT_MIN)

    for (int i = 1; i < n; i++) {
        if (arr[i] > largest) {
            secondLargest = largest;
            largest = arr[i];
        } else if (arr[i] > secondLargest && arr[i] != largest) {
            secondLargest = arr[i];
        }
    }

    if (secondLargest == -15000000) {
        printf("There is no second largest element (all elements might be equal).\n");
        return -1;
    }

    return secondLargest;
}

int main()
{
    int arr[]={10,10,10,10};
    printf("the second largest elemenst is %d", secondLargestElement(arr, 4));
}

// Hint: Think about initializing both largest and secondLargest using the first two array elements.

