// Remove all duplicate elements from an array.but i am doing the array is sorted by the two pinter approch 
#include <stdio.h>

int remove_duplicate(int arr[], int size)
{
    if (size == 0)
        return 0;

    int write = 1;

    for (int read = 1; read < size; read++)
    {
        if (arr[read] != arr[write - 1])
        {
            arr[write] = arr[read];
            write++;
        }
    }

    return write;
}

int main()
{
    int arr[] = {10, 10, 20, 20, 30, 30};
    int size = 6;

    size = remove_duplicate(arr, size);

    for (int i = 0; i < size; i++)
    {
        printf("%d ", arr[i]);
    }

    return 0;
}
