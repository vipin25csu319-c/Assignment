#include <stdio.h>

int findScore99(int arr[], int size) {
    for (int i = 0; i < size; i++) {
        if (arr[i] == 99) {
            return i;  
        }
    }
    return -1;  
}

int main() {
    int size;
    
    printf("Enter the number of scores (1-100): ");
    scanf("%d", &size);

    if (size < 1 || size > 100) {
        printf("Please enter a valid array size between 1 and 100\n");
        return 1;
    }
    
    int scores[100]; 
    
    printf("Enter %d scores:\n", size);
    for (int i = 0; i < size; i++) {
        printf("Score %d: ", i + 1);
        scanf("%d", &scores[i]);
        
        if (scores[i] < 0 || scores[i] > 100) {
            printf("Please enter scores between 0 and 100\n");
            return 1;
        }
    }
    
    int position = findScore99(scores, size);
    
    if (position != -1) {
        printf("\nScore 99 found at position %d (index %d)\n", position + 1, position);
    } else {
        printf("\nScore 99 not found in the array\n");
    }
    
    return 0;
}