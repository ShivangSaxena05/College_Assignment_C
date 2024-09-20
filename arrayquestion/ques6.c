#include <stdio.h>

int count(int arr[],int n,int k){
    int count = 0;
    for(int i = 0 ; i < n ; i++)
    if(arr[i]==k){
        count++;
    }
    return count;
}

int main(){
    int arr[] = {2, 3, 2, 3, 2};
    int m = count(arr,5,2);
    printf("%d",m);
    return 0;
}