#include <stdio.h>

void shiftzero(int arr[],int size){
    int m = 0;
        for(int j = 0 ; j < size ; j++){
            if(arr[j]!=0){
                int temp = arr[m];
                arr[m] = arr[j];
                arr[j] = temp;
                m++;
            }
    }
    for(int i = 0 ; i < size ; i++){
        printf("%d",arr[i]);
    }
}

int main(){
    int arr[5] = {0, 1, 0, 3, 12};
    int size = sizeof(arr)/sizeof(arr[0]);
    shiftzero(arr,size);
}