#include <stdio.h>

int findlarg(int arr[],int n){
    int max = arr[0];
    for(int i = 0 ; i < n ; i++)
    if(max<arr[i]){
        max = arr[i];
    }
    return max;
}

int main(){
    int arr[] = {1, 3, 7, 0, 5};
    int m = findlarg(arr,5);
    printf("%d",m);
    return 0;
}