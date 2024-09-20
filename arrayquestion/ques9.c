#include <stdio.h>



void findsmall(int arr[],int n){
    int small = arr[0];
    int max = arr[0];
    for(int i = 0 ; i < n ; i++)
    {    if(small>arr[i]){
            small = arr[i];
        }
        if(max<arr[i]){
            max = arr[i];
        }
    }    
    printf("max : %d small : %d ",max,small);
}

int main(){
    int arr[] = {1, 3, 7, 2, 5};
    findsmall(arr,5);
    return 0;
}