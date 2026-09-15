#include<stdio.h>
int missing_duplicate(int arr[], int size){
    int actullySum = (size*(size+1))/2;
    int getSum =0;
    for(int i =0 ; i<size;i++){
        getSum= getSum +arr[i];
    }
    return actullySum- getSum;

}
int main(){
    int arr[5]={1,2,3,5};
    int missing=missing_duplicate(arr,5);
    printf("the missing element is:- %d \n", missing);

}