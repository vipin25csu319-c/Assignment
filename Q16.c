#include <stdio.h>

#define MAX_SIZE 100

void printArray(int arr[], int size) {
    for (int i = 0; i < size; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");
}

void insertAtEnd(int arr[], int *size, int element) {
    if (*size < MAX_SIZE) {
        arr[*size] = element;
        (*size)++;
    } else {
        printf("Array is full, cannot insert.\n");
    }
}

void insertAtFront(int arr[], int *size, int element) {
    if (*size < MAX_SIZE) {
        for (int i = *size; i > 0; i--) {
            arr[i] = arr[i - 1];
        }
        arr[0] = element;
        (*size)++;
    } else {
        printf("Array is full, cannot insert.\n");
    }
}

void insertAtMiddle(int arr[], int *size, int element) {
    if (*size < MAX_SIZE) {
        int mid = *size / 2;
        for (int i = *size; i > mid; i--) {
            arr[i] = arr[i - 1];
        }
        arr[mid] = element;
        (*size)++;
    } else {
        printf("Array is full, cannot insert.\n");
    }
}

int main() {
    int arr[MAX_SIZE];
    int size;
    int element = 10;
    int original[] = {1, 2, 3, 4, 5};
    int originalSize = 5;

    // Insert at end
    size = originalSize;
    for (int i = 0; i < size; i++) arr[i] = original[i];
    printf("Original array: ");
    printArray(arr, size);
    insertAtEnd(arr, &size, element);
    printf("After inserting %d at end: ", element);
    printArray(arr, size);

    // Insert at front
    size = originalSize;
    for (int i = 0; i < size; i++) arr[i] = original[i];
    printf("Original array: ");
    printArray(arr, size);
    insertAtFront(arr, &size, element);
    printf("After inserting %d at front: ", element);
    printArray(arr, size);

    // Insert at middle
    size = originalSize;
    for (int i = 0; i < size; i++) arr[i] = original[i];
    printf("Original array: ");
    printArray(arr, size);
    insertAtMiddle(arr, &size, element);
    printf("After inserting %d at middle: ", element);
    printArray(arr, size);

    return 0;
}
