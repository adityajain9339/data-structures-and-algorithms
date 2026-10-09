#include <stdio.h>

int BinarySearch(int arr[], int size, int target)
{
    int low = 0;
    int high = size - 1;

    while (low <= high)
    {
        int mid = low + (high - low) / 2;

        if (arr[mid] == target)
        {
            return mid;
        }
        else if (arr[mid] < target)
        {
            low = mid + 1;
        }
        else
        {
            high = mid - 1;
        }
    }

    return -1;
}

int main()
{
    int size;
    printf("enter the size of the array : ");
    scanf("%d", &size);
    int arr[size];
    for (int i = 0; i < size; i++)
    {
        printf("enter the value in the index %d: ", i + 1);
        scanf("%d", &arr[i]);
    }

    int target;

    printf("Enter the element to search: ");
    scanf("%d", &target);

    int result = BinarySearch(arr, size, target);

    if (result != -1)
    {
        printf("Element found at index %d\n", result);
    }
    else
    {
        printf("Element not found\n");
    }

    return 0;
}