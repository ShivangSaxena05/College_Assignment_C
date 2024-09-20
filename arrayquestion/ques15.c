#include <stdio.h>

int maxSubArray(int arr[], int size) {
    int maxSoFar = arr[0];
    int maxEndingHere = arr[0];

    for (int i = 1; i < size; i++) {
        if (arr[i] > maxEndingHere + arr[i]) {
            maxEndingHere = arr[i];
        } else {
            maxEndingHere += arr[i];
        }
        if (maxEndingHere > maxSoFar) {
            maxSoFar = maxEndingHere;
        }
    }

    return maxSoFar;
}

int main() {
    int arr1[] = {-2, 1, -3, 4, -1, 2, 1, -5, 4};
    int size1 = sizeof(arr1) / sizeof(arr1[0]);
    printf("%d\n", maxSubArray(arr1, size1));

    int arr2[] = {1, 2, 3, 4, -10};
    int size2 = sizeof(arr2) / sizeof(arr2[0]);
    printf("%d\n", maxSubArray(arr2, size2));

    return 0;
}
