// Given an integer array nums of size n, return the majority element of the array.

// The majority element of an array is an element that appears more than n/2 times in the array.
//  The array is guaranteed to have a majority element.

// Example 1:
// Input: nums = [7, 0, 0, 1, 7, 7, 2, 7, 7]

// Output: 7

// Explanation:

// The number 7 appears 5 times in the 9 sized array

// Example 2:
// Input: nums = [1, 1, 1, 2, 1, 2]

// Output: 1

// Explanation:

// The number 1 appears 4 times in the 6 sized array

// Constraints:
// n == nums.length.
// 1 <= n <= 105
// -104 <= nums[i] <= 104
// One value appears more than n/2 times.

#include <stdio.h>
int MajorityElement(int arr[], int size)
{
    int count = 0;
    int visited[size];

    // Initialize all positions as unvisited
    for (int i = 0; i < size; i++)
    {
        visited[i] = 0;
    }

    for (int i = 0; i < size; i++)
    {
        if (visited[i] == 1)
        {
            continue;
        }

        int count = 1;

        for (int j = i + 1; j < size; j++)
        {
            if (arr[i] == arr[j])
            {
                count++;
                visited[j] = 1;
            }
        }

        // printf("%d appears %d time(s)\n", arr[i], count);
        if(count> size/2){
            return arr[i];
        }
    }
}
int main()
{
#include <stdio.h>

    int arr[] = {7, 0, 0, 1, 7, 7, 2, 7, 7};

    int size = sizeof(arr) / sizeof(arr[0]);
    // int visited[size];

    // // Initialize all positions as unvisited
    // for (int i = 0; i < size; i++)
    // {
    //     visited[i] = 0;
    // }

    // for (int i = 0; i < size; i++)
    // {
    //     if (visited[i] == 1)
    //     {
    //         continue;
    //     }

    //     int count = 1;

    //     for (int j = i + 1; j < size; j++)
    //     {
    //         if (arr[i] == arr[j])
    //         {
    //             count++;
    //             visited[j] = 1;
    //         }
    //     }

    //     printf("%d appears %d time(s)\n", arr[i], count);
    // }
    int a = MajorityElement(arr, size);
    printf("%d", a);

    return 0;
}