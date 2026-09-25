#include <stdio.h>

int SecondLargestElement(int arr[], int size)
{
    int largest, second_largest;

    if (arr[0] > arr[1])
    {
        largest = arr[0];
        second_largest = arr[1];
    }
    else
    {
        largest = arr[1];
        second_largest = arr[0];
    }

    for (int i = 2; i < size; i++)
    {
        if (arr[i] > largest)
        {
            second_largest = largest;
            largest = arr[i];
        }
        else if (arr[i] > second_largest)
        {
            second_largest = arr[i];
        }
    }

    return second_largest;
}

int main()
{
    int size;

    printf("Enter the size of the array: ");
    scanf("%d", &size);

    if (size < 2)
    {
        printf("Array must contain at least 2 elements.\n");
        return 0;
    }

    int arr[size];

    for (int i = 0; i < size; i++)
    {
        printf("Enter the value at index %d: ", i);
        scanf("%d", &arr[i]);
    }

    int a = SecondLargestElement(arr, size);

    printf("The second largest element in the array is %d\n", a);

    return 0;
}