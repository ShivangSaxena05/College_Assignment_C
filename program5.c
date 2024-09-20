#include <stdio.h>
#include <string.h>

#define MAX_STR_SIZE 100
#define MAX_ARR_SIZE 10

void addELE(char arr[][MAX_STR_SIZE], int *n, int max_size) {
    int found = 1;
    int m = 1;
    while (m == 1) {
        char k[MAX_STR_SIZE];
        printf("Enter a string to add in array\n");
        fgets(k, MAX_STR_SIZE, stdin);
        k[strcspn(k, "\n")] = 0; // Remove the newline character
        for (int i = 0; i < *n; i++) {
            if (strcmp(arr[i], k) == 0) {
                found = 0;
                break;
            }
        }
        if (found == 1 && *n < max_size) {
            strcpy(arr[(*n)++], k);
            for (int i = 0; i < *n; i++) {
                printf("%s \t", arr[i]);
            }
        } else {
            printf("Already exists or array is full\n");
        }
        printf("\nTo Add More write 1 or 0 to exit\n");
        scanf("%d", &m);
        getchar(); // Consume the newline character
    }
}

int main() {
    char arr[MAX_ARR_SIZE][MAX_STR_SIZE] = {"hello", "hey"}; // Initialize array with strings
    int n = 2; // Initialize array size
    addELE(arr, &n, MAX_ARR_SIZE);
    return 0;
}