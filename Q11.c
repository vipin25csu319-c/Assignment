#include <stdio.h>

#define MAX_SIZE 100

void separateScores(int scores[], int size, 
                    int even_array[], int *even_count, 
                    int odd_array[], int *odd_count) {
    *even_count = 0;
    *odd_count = 0;
    
    for (int i = 0; i < size; i++) {
        if (scores[i] % 2 == 0) {
            even_array[*even_count] = scores[i];
            (*even_count)++;
        } else {
            odd_array[*odd_count] = scores[i];
            (*odd_count)++;
        }
    }
}

void displayArray(const char *name, int arr[], int size) {
    printf("\n%s: ", name);
    for (int i = 0; i < size; i++) {
        printf("%d", arr[i]);
        if (i < size - 1) printf(", ");
    }
    printf("\n");
}

int main() {
    int scores[MAX_SIZE];
    int even_array[MAX_SIZE];
    int odd_array[MAX_SIZE];
    int size, even_count, odd_count;
    
 
    printf("Enter the number of scores (1-%d): ", MAX_SIZE);
    scanf("%d", &size);
    
    
    if (size < 1 || size > MAX_SIZE) {
        printf("Invalid size! Please enter between 1 and %d\n", MAX_SIZE);
        return 1;
    }
    printf("\nEnter %d scores (0-100):\n", size);
    for (int i = 0; i < size; i++) {
        printf("Score %d: ", i + 1);
        scanf("%d", &scores[i]);
        
        if (scores[i] < 0 || scores[i] > 100) {
            printf("Invalid score! Please enter between 0 and 100\n");
            return 1;
        }
    }
    
    separateScores(scores, size, even_array, &even_count, odd_array, &odd_count);
    
    printf("\nResults:");
    displayArray("Original array", scores, size);
    displayArray("Even scores", even_array, even_count);
    displayArray("Odd scores", odd_array, odd_count);
    
    printf("\nSummary:");
    printf("\nTotal scores: %d", size);
    printf("\nEven scores: %d", even_count);
    printf("\nOdd scores: %d\n", odd_count);
    
    return 0;
}