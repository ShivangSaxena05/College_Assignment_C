#include <stdio.h>
int rotate(int arr[],int k,int n){
    int temp[n];
    int d = 0;
    for(int i = k ; i < n ; i++){
        temp[d++] = arr[i];
    }
    for(int i = 0 ; i<k;i++){
        temp[d++]= arr[i];
    }
    for(int i = 0 ; i < n ; i++){
        printf("%d \t",temp[i]);
    }
}
int main(){
    int arr[10] = {1,2,3,4,5,6,7,8,9,0};
    rotate(arr,2,10);
}