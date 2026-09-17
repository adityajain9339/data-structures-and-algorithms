#include <stdio.h>
    
#include <limits.h> // this the unique provide the max or min of any data type   like ---int first = INT_MIN;

int second_largest(int arr[], int size)
{
    if (size < 2)
    {
        printf("Array must have at least two elements.\n");
        return -1;
    }

    int first = INT_MIN;
    int second = INT_MIN;

    for (int i = 0; i < size; i++)
    {
        if (arr[i] > first)
        {
            second = first;
            first = arr[i];
        }
        else if (arr[i] > second && arr[i] != first)
        {
            second = arr[i];
        }
    }

    if (second == INT_MIN)
    {
        printf("There is no second largest distinct element.\n");
        return -1;
    }

    return second;
}

int main()
{
    int size;

    printf("Enter the size of the array:\n");
    scanf("%d", &size);

    if (size <= 0)
    {
        printf("Invalid array size.\n");
        return 1;
    }

    int arr[size];

    for (int i = 0; i < size; i++)
    {
        printf("Enter the value at index %d:\n", i);
        scanf("%d", &arr[i]);
    }

    printf("Array you inserted is:\n");

    for (int i = 0; i < size; i++)
    {
        printf("%d\n", arr[i]);
    }

    

    int result = second_largest(arr, size);

    if (result != -1)
    {
        printf("The second largest distinct element is: %d\n", result);
    }

    return 0;
}