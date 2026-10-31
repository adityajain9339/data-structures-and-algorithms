#include<stdio.h>
int countOdd(int arr[], int size){
    int count =0;
    for(int i =0 ; i<size;i++){
        if(!arr[i]%2==0){
            count++;
        }
    }
    return count ;
}
int main(){
    int arr[5]={1,3,5,7,9};
    printf("the odd number is :- %d\n", countOdd(arr,5));
    
}