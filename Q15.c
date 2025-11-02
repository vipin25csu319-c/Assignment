#include <stdio.h>

#define MAX_SIZE 100

void rotateArray(int arr[], int size) {
    int last = arr[size - 1];

    for (int i = size - 1; i > 0; i--) {
        arr[i] = arr[i - 1];
    }

    arr[0] = last;
}

void displayArray(const char *msg, int arr[], int size) {
    printf("%s: ", msg);
    for (int i = 0; i < size; i++) {
        printf("%d", arr[i]);
        if (i < size - 1) printf(", ");
    }
    printf("\n");
}

int main() {
    int arr[MAX_SIZE];
    int size;
 
    printf("Enter the size of array (1-%d): ", MAX_SIZE);
    scanf("%d", &size);
  
    if (size < 1 || size > MAX_SIZE) {
        printf("Invalid size! Please enter between 1 and %d\n", MAX_SIZE);
        return 1;
    }
   
    printf("\nEnter %d elements:\n", size);
    for (int i = 0; i < size; i++) {
        printf("Element %d: ", i + 1);
        scanf("%d", &arr[i]);
    }
  
    displayArray("Original array", arr, size);
  
    rotateArray(arr, size);
    
    displayArray("Rotated array", arr, size);
    
    return 0;
}