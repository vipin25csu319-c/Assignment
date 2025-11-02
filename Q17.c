#include <stdio.h>

#define MAX_SIZE 100

void printArray(int arr[], int size) {
    for (int i = 0; i < size; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");
}

void deleteAtEnd(int arr[], int *size) {
    if (*size > 0) {
        (*size)--;
    } else {
        printf("Array is empty, cannot delete.\n");
    }
}

void deleteAtFront(int arr[], int *size) {
    if (*size > 0) {
        for (int i = 0; i < *size - 1; i++) {
            arr[i] = arr[i + 1];
        }
        (*size)--;
    } else {
        printf("Array is empty, cannot delete.\n");
    }
}

void deleteAtMiddle(int arr[], int *size) {
    if (*size > 0) {
        int mid = (*size - 1) / 2;  // For even sizes, delete the lower middle
        for (int i = mid; i < *size - 1; i++) {
            arr[i] = arr[i + 1];
        }
        (*size)--;
    } else {
        printf("Array is empty, cannot delete.\n");
    }
}

int main() {
    int arr[MAX_SIZE];
    int size;
    int original[] = {1, 2, 3, 4, 5};
    int originalSize = 5;

    // Delete at end
    size = originalSize;
    for (int i = 0; i < size; i++) arr[i] = original[i];
    printf("Original array: ");
    printArray(arr, size);
    deleteAtEnd(arr, &size);
    printf("After deleting at end: ");
    printArray(arr, size);

    // Delete at front
    size = originalSize;
    for (int i = 0; i < size; i++) arr[i] = original[i];
    printf("Original array: ");
    printArray(arr, size);
    deleteAtFront(arr, &size);
    printf("After deleting at front: ");
    printArray(arr, size);

    // Delete at middle
    size = originalSize;
    for (int i = 0; i < size; i++) arr[i] = original[i];
    printf("Original array: ");
    printArray(arr, size);
    deleteAtMiddle(arr, &size);
    printf("After deleting at middle: ");
    printArray(arr, size);

    return 0;
}
