#include <stdio.h>



int findlarg(int arr[],int n){
    int max = arr[0];
    int sec;
    for(int i = 0 ; i < n ; i++){
        if(max<arr[i]){
            sec = max;
            max = arr[i];
        }else if(sec<arr[i] && sec!=max){
            sec = arr[i];
        }

    }
    return sec;
}

int main(){
    int arr[] = {1, 3, 7, 0, 5};
    int m = findlarg(arr,5);
    printf("%d",m);
    return 0;
}