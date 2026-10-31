#include<stdio.h>
// Done the Sum of Array Elements 
int sum(int arr[], int n) {
        int sum = 0;
        for (int i = 0; i < n; i++) {
            sum = sum + arr[i];
        }
        return sum;
}
int main(){
    int arr[5]= {10,2,4,6,7};
    printf("the sum of array : %d", sum(arr,5));

}