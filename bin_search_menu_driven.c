//
// Created by MANAN on 29/08/23.
//
#include <stdio.h>

int binarySearchIterative(int arr[], int size, int target) {
    int left = 0;
    int right = size - 1;

    while (left <= right) {
        int mid = left + (right - left) / 2;

        if (arr[mid] == target) {
            return mid;
        } else if (arr[mid] < target) {
            left = mid + 1;
        } else {
            right = mid - 1;
        }
    }

    return -1;
}

int binarySearchRecursive(int arr[], int left, int right, int target) {
    if (left <= right) {
        int mid = left + (right - left) / 2;

        if (arr[mid] == target) {
            return mid;
        } else if (arr[mid] < target) {
            return binarySearchRecursive(arr, mid + 1, right, target);
        } else {
            return binarySearchRecursive(arr, left, mid - 1, target);
        }
    }

    return -1;
}

int main() {
    int choice;
    int size;
    printf("Enter the size of the array: ");
    scanf("%d", &size);

    int arr[size];

    printf("Enter %d sorted elements:\n", size);
    for (int i = 0; i < size; i++) {
        scanf("%d", &arr[i]);
    }

    int target;
    printf("Enter the element to search for: ");
    scanf("%d", &target);

    printf("Choose an option:\n");
    printf("1. Binary Search (Iterative)\n");
    printf("2. Binary Search (Recursive)\n");
    printf("Enter your choice: ");
    scanf("%d", &choice);

    int result = -1;

    switch (choice) {
        case 1:
            result = binarySearchIterative(arr, size, target);
            break;
        case 2:
            result = binarySearchRecursive(arr, 0, size - 1, target);
            break;
        default:
            printf("Invalid choice!\n");
            return 1;
    }

    if (result != -1) {
        printf("Element found at index: %d\n", result);
    } else {
        printf("Element not found in the array.\n");
    }

    return 0;
}

