#include <stdio.h>

void removeDuplicates(int arr[], int n) {
    int temp[n];
    int j = 0;

    for (int i = 0; i < n - 1; i++) {
        if (arr[i] != arr[i + 1]) {
            temp[j++] = arr[i];
        }
    }
    temp[j++] = arr[n - 1];

    for (int i = 0; i < j; i++) {
        arr[i] = temp[i];
    }

    for (int i = 0; i < j; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");
}

int main() {
    int arr1[] = {1, 1, 2, 3, 3};
    int n1 = sizeof(arr1) / sizeof(arr1[0]);
    printf("Original array: ");
    for (int i = 0; i < n1; i++) {
        printf("%d ", arr1[i]);
    }
    printf("\nArray after removing duplicates: ");
    removeDuplicates(arr1, n1);

    int arr2[] = {4, 5, 4, 6, 5};
    int n2 = sizeof(arr2) / sizeof(arr2[0]);
    printf("Original array: ");
    for (int i = 0; i < n2; i++) {
        printf("%d ", arr2[i]);
    }

    printf("\nArray after removing duplicates: ");
    removeDuplicates(arr2, n2);

    return 0;
}
