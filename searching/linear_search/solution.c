#include <stdio.h>

int main()
{

    int key;
    int found = 0;

    int size;
    printf("enter the size of the array : ");
    scanf("%d", &size);
    int arr[size];
    for (int i = 0; i < size; i++)
    {
        printf("enter the value in the index %d: ", i + 1);
        scanf("%d", &arr[i]);
    }

    printf("Enter the element to search: ");
    scanf("%d", &key);

    for (int i = 0; i < size; i++)
    {
        if (arr[i] == key)
        {
            printf("Element found at index %d\n", i);
            found = 1;
            break;
        }
    }

    if (found == 0)
    {
        printf("Element not found\n");
    }

    return 0;
}