#include <stdio.h>

int missing_number(int arr[], int size)
{
    int xor = 0;

    // XOR numbers from 1 to n
    for (int i = 1; i <= size; i++)
    {
        xor = xor ^ i;
    }

    // XOR elements of the array
    for (int i = 0; i < size - 1; i++)
    {
        xor = xor ^ arr[i];
    }

    return xor;
}

int main()
{
    int arr[4] = {1, 2, 3, 5};

    int missing = missing_number(arr, 5);

    printf("The missing element is: %d\n", missing);

    return 0;
}

