// Remove all duplicate elements from an array.
#include <stdio.h>

void remove_duplicate(int arr[], int size)
{
    int duplicateArray[size];
    int newSize = 0;

    for (int i = 0; i < size; i++)
    {
        int duplicate = 0;

        // Check whether arr[i] already exists
        // in duplicateArray
        for (int j = 0; j < newSize; j++)
        {
            if (arr[i] == duplicateArray[j])
            {
                duplicate = 1;
                break;
            }
        }

        // If it is not a duplicate, store it
        if (duplicate == 0)
        {
            duplicateArray[newSize] = arr[i];
            newSize++;
        }
    }

    // Copy the unique elements back to the original array
    for (int i = 0; i < newSize; i++)
    {
        arr[i] = duplicateArray[i];
    }

    // Since the original function is void, we can't return newSize.
    // For this example, fill the remaining positions with 0.
    for (int i = newSize; i < size; i++)
    {
        arr[i] = 0;
    }
}

void getArrayElements(int arr[], int size)
{
    printf("Enter %d numbers:\n", size);

    for (int i = 0; i < size; i++)
    {
        printf("Element %d: ", i + 1);
        scanf("%d", &arr[i]);
    }
}

void printArray(int arr[], int size)
{
    printf("\nThe array elements are: ");

    for (int i = 0; i < size; i++)
    {
        printf("%d ", arr[i]);
    }

    printf("\n");
}

int main()
{
    int n;

    printf("Enter the size of the array: ");
    scanf("%d", &n);

    int myArray[n];

    getArrayElements(myArray, n);

    printf("\nBefore removing the duplicate:");
    printArray(myArray, n);

    remove_duplicate(myArray, n);

    printf("\nAfter removing the duplicate:");
    printArray(myArray, n);

    return 0;
}