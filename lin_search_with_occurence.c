//
// Created by MANAN on 29/08/23.
//
#include <stdio.h>
void linearSearchMultiple(int arr[], int n, int key) {
    int found = 0;
    printf("Indices with %d as the key: ", key);

    for (int i = 0; i < n; i++) {
        if (arr[i] == key) {
            printf("%d ", i);
            found = 1;
        }
    }

    if (!found) {
        printf("Key not found.");
    }
    printf("\n");
}

int main() {
    int arr[] = {2, 5, 7, 2, 8, 2, 6};
    int n = sizeof(arr) / sizeof(arr[0]);
    int key = 2;

    linearSearchMultiple(arr, n, key);

    return 0;
}

