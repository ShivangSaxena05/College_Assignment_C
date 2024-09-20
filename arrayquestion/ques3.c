#include <stdio.h>



int findsum(int arr[],int n){
    int sum = 0;
    for(int i = 0 ; i < n ; i++)
    sum += arr[i];
    return sum;
}

int main(){
    int arr[] = {1, 3, 7, 2, 5};
    int m = findsum(arr,5);
    printf("%d",m);
    return 0;
}