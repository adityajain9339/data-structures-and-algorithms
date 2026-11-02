#include <stdio.h>
// Given an array arr of size n,
// the task is to check if the given array is sorted in (ascending / Increasing / Non-decreasing) order. If the array is sorted then return True, else return False.
int arraySortedOrNot(int arr[], int n)
{
    int count = 0;
    for (int i = 0; i < n; i++)
    {
        if (!arr[i + 1])
        {
            if (arr[i] > arr[i + 1])
            {
            }
            else
                count++;
        }
    }
    if (count == n)
        return 1;
    else
        return 0;
}
int main()
{
    int arr[] = {1, 2, 3, 4, 5};
    printf("the arr is shorted : %d", arraySortedOrNot(arr, 5));
}
void bubble_sort(int arr[], int size_of_array)
{
    for (int i = size_of_array - 1; i >= 1; i--)
    {
        int cheak_swap = 0;
        for (int j = 0; j <= i - 1; j++)
        {
            if (arr[j] > arr[j + 1])
            {
                int temp = arr[j + 1];
                arr[j + 1] = arr[j];
                arr[j] = temp;
                cheak_swap = 1;
            }
        }
        if (cheak_swap == 0)
        {
            break;
        }
    }
}