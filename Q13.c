#include <stdio.h>

#define MAX_SIZE 100
int findPeakElement(int arr[], int size) {
    if (size == 1) 
        return 0;

    if (arr[0] >= arr[1])
        return 0;
    
    if (arr[size-1] >= arr[size-2])
        return size-1;
    
    for (int i = 1; i < size-1; i++) {
        if (arr[i] >= arr[i-1] && arr[i] >= arr[i+1])
            return i;
    }
    
    return -1; 
}

int main() {
    int arr[MAX_SIZE];
    int size;
    
    
    printf("Enter the number of elements (1-%d): ", MAX_SIZE);
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
  
    int peakIndex = findPeakElement(arr, size);
   
    printf("\nArray elements: ");
    for (int i = 0; i < size; i++) {
        printf("%d", arr[i]);
        if (i < size - 1) printf(", ");
    }
    
    if (peakIndex != -1) {
        printf("\nPeak element found at index %d", peakIndex);
        printf("\nPeak element value: %d\n", arr[peakIndex]);
    } else {
        printf("\nNo peak element found!\n");
    }
    
    return 0;
}