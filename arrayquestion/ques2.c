#include <stdio.h>



int findsmall(int arr[],int n){
    int small = arr[0];
    for(int i = 0 ; i < n ; i++)
    if(small>arr[i]){
        small = arr[i];
    }
    return small;
}

int main(){
    int arr[] = {1, 3, 7, 2, 5};
    int m = findsmall(arr,5);
    printf("%d",m);
    return 0;
}