#include <stdio.h>
#include <stdbool.h>
bool check(int arr[],int n){
    for(int i = 0 ; i < n ; i++)
    if(arr[i]>arr[i+1]){
        return false;
    }
    return true;
}

int main(){
    int arr[] = {1,2,3,4,5};
    bool m = check(arr,5);
    printf("%s",m ? "true" : "false");
    return 0;
}