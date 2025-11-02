#include <stdio.h>
#include <stdlib.h>

#define MAX_ELEMENT 1000  

int main() {
    int n;
    printf("Enter the size of the array: ");
    if (scanf("%d", &n) != 1 || n <= 0) {
        printf("Invalid array size. Plesase enter a positive integer.\n");
        return 1;
    }

    int arr[n];
    printf("Enter %d elements (non-negative integers from 0 to %d): ", n, MAX_ELEMENT - 1);
    for (int i = 0; i < n; i++) {
        if (scanf("%d", &arr[i]) != 1 || arr[i] < 0 || arr[i] >= MAX_ELEMENT) {
            printf("Invalid input. Elements must be non-negative integers from 0 to %d.\n", MAX_ELEMENT - 1);
            return 1;
        }
    }
    int freq[MAX_ELEMENT] = {0};
    for (int i = 0; i < n; i++) {
        freq[arr[i]]++;
    }
    int hasDuplicates = 0;
    for (int i = 0; i < MAX_ELEMENT; i++) {
        if (freq[i] > 1) {
            printf("%d ", i);
            hasDuplicates = 1;
        }
    }

    if (!hasDuplicates) {
        printf("-1");
    }
    printf("\n");

    return 0;
}
