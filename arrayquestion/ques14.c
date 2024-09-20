#include <stdio.h>

void intersection(int arr1[], int size1, int arr2[], int size2) {
    int result[100];
    int k = 0;

    int maxSize;
    if (size1 < size2) {
        maxSize = size1;
    } else {
        maxSize = size2;
    }

    for (int i = 0; i < size1; i++) {
        for (int j = 0; j < size2; j++) {
            if (arr1[i] == arr2[j]) {
                int found = 0;
                for (int m = 0; m < k; m++) {
                    if (result[m] == arr1[i]) {
                        found = 1;
                        break;
                    }
                }
                if (!found) {
                    result[k++] = arr1[i];
                }
            }
        }
    }

    for (int i = 0; i < k; i++) {
        printf("%d ", result[i]);
    }
}

int main() {
    int arr1[] = {1, 2, 3, 4, 5};
    int arr2[] = {4, 5, 6, 7, 8};
    int size1 = sizeof(arr1) / sizeof(arr1[0]);
    int size2 = sizeof(arr2) / sizeof(arr2[0]);

    intersection(arr1, size1, arr2, size2);
    
    return 0;
}
