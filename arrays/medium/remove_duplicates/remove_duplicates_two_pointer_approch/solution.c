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
    int resize= remove_duplicate(arr,size);
    printf("\nAfter removing the duplicate:\n");
    for (int i = 0; i < resize; i++)
    {
        printf("%d\n", arr[i]);
    }
    

    

    
    return 0;
}


