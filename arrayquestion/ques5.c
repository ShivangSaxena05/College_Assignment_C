#include <stdio.h>



void reverse(int arr[],int n){
    for(int i = n-1 ; i >= 0 ; i--){
        printf("%d \t",arr[i]);
    }
}

int main(){
    int arr[] = {1, 3, 7, 0, 5};
    reverse(arr,5);
    return 0;
}