// Write a program to populate an array with unique numbers, such that which accept a 
// number and add into an array only if it does not exis
#include <stdio.h>
void addELE(int arr[],int n){
    int found = 1;
    int m=1;
    while(m==1){
        int k;
        printf("Enter a number to add in array\n");
        scanf("%d",&k);
        for(int i = 0; i < n ; i++){
            if(arr[i]==k){
                found = 0;
                break;
            }
        }
        if(found==1){
            arr[n++] = k;
            for(int i = 0 ; i < n ; i++){
                printf("%d \t",arr[i]);
            }
        }else{
            printf("Already exist\n");
        }
        printf("\nTo Add More write 1 or 0 to exit\n");
        scanf("%d",&m);
    }
}
int main(){
    int arr[10] = {1,2,3,4,5,6,7,8,9,0};
    addELE(arr,10);
}