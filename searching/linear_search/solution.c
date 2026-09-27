#include <stdio.h>

int main()
{
    int arr[] = {10, 25, 30, 45, 50};
    int size = 5;
    int key;
    int found = 0;

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