#include <stdio.h>
int findmiss(int arr[], int n){
    int temp = 0;
    for(int i = 1 ; i <= n ; i++){
        // printf("%d",arr[i-1]);
        // printf("%d",i);
        if(arr[i-1]!=i){
            temp=i;
            break;
        }
    }
    printf("%d",temp);
}
int main(){
    int arr[5] = {1, 3, 4};
    int n = sizeof(arr)/sizeof(arr[0]);
    findmiss(arr,n);
}