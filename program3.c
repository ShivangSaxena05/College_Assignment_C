// Write a C function that takes an array of int and determines if all the numbers are 
// different from each other (i.e. they are distinct) 



//Done!!!


#include <stdio.h>
#include <stdbool.h>
bool checkdistinct(int arr[],int n){
    bool flag = true;
    for(int i = 0; i < n ; i++){
        for(int j = i+1 ; j < n ; j++){
            if(arr[i]==arr[j]){
                flag = false;
                break;
            }
        }
    }
    return flag;
}
int main(){
    int array[10] = {1,2,3,4,5,6,7,8,9,9};
    bool check = checkdistinct(array,10);
    if(check){
        printf("unique");
    }else{
        printf(" notunique");
    }
}