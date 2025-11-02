#include <stdio.h>

#define MAX_SIZE 100

void findMaxMin(int scores[], int size, int *max, int *min) {
    *max = scores[0];
    *min = scores[0];
    
    for (int i = 1; i < size; i++) {
        if (scores[i] > *max) {
            *max = scores[i];
        }
        if (scores[i] < *min) {
            *min = scores[i];
        }
    }
}

int main() {
    int scores[MAX_SIZE];
    int size, max_score, min_score;
    
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
    
    findMaxMin(scores, size, &max_score, &min_score);
    
    printf("\nArray Analysis:");
    printf("\nScores: ");
    for (int i = 0; i < size; i++) {
        printf("%d", scores[i]);
        if (i < size - 1) printf(", ");
    }
    printf("\nMaximum Score: %d", max_score);
    printf("\nMinimum Score: %d", min_score);
    printf("\nScore Range: %d\n", max_score - min_score);
    
    return 0;
}