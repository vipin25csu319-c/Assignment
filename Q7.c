#include <stdio.h>

void printBinaryPyramid(int rows) {
    int i, j;
    
    
    for(i = 1; i <= rows; i++) {
        
        for(j = 1; j <= rows - i; j++) {
            printf(" ");
        }
        
        
        for(j = 1; j <= i; j++) {
            printf("0");
            if(j < i) {
                printf("1");
            }
        }
        
        printf("\n");
    }
}

int main() {
    int rows;
    
    printf("Enter the number of rows for binary pyramid (1-10): ");
    scanf("%d", &rows);
    
    
    if(rows < 1 || rows > 10) {
        printf("Please enter a number between 1 and 10\n");
        return 1;
    }
    
    printf("\nBinary Pyramid Pattern:\n");
    printBinaryPyramid(rows);
    
    return 0;
}