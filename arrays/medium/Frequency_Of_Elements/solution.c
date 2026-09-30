#include <stdio.h>

// Function to find and print frequency of each element
void findFrequency(int arr[], int n) {
    int visited[n];
    
    // Initialize visited array
    for(int i = 0; i < n; i++) {
        visited[i] = 0;
    }
    
    printf("\nFrequency of each element:\n");
    
    for(int i = 0; i < n; i++) {
        // Skip if already counted
        if(visited[i] == 1)
            continue;
        
        int count = 1;
        
        // Count occurrences of arr[i]
        for(int j = i + 1; j < n; j++) {
            if(arr[i] == arr[j]) {
                count++;
                visited[j] = 1;  // Mark as visited
            }
        }
        
        printf("%d occurs %d times\n", arr[i], count);
    }
}

int main() {
    int n;
    
    printf("Enter the number of elements: ");
    scanf("%d", &n);
    
    int arr[n];
    
    printf("Enter %d elements:\n", n);
    for(int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }
    
    // Call the function
    findFrequency(arr, n);
    
    return 0;
}
// ...........................................................................................

// #include <stdio.h>

// int main() {
//     int n, i, j, count;
    
//     printf("Enter the number of elements: ");
//     scanf("%d", &n);
    
//     int arr[n];
    
//     printf("Enter %d elements:\n", n);
//     for(i = 0; i < n; i++) {
//         scanf("%d", &arr[i]);
//     }
    
//     // Array to mark visited elements
//     int visited[n];
//     for(i = 0; i < n; i++) {
//         visited[i] = 0;
//     }
    
//     printf("\nFrequency of each element:\n");
    
//     for(i = 0; i < n; i++) {
//         // Skip if already counted
//         if(visited[i] == 1)
//             continue;
        
//         count = 1;
        
//         // Count occurrences of arr[i]
//         for(j = i + 1; j < n; j++) {
//             if(arr[i] == arr[j]) {
//                 count++;
//                 visited[j] = 1;  // Mark as visited
//             }
//         }
        
//         printf("%d occurs %d times\n", arr[i], count);
//     }
    
//     return 0;
// }