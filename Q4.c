#include <stdio.h>

// Method 1: Using temporary variable
void swapUsingTemp(int *a, int *b) {
    int temp = *a;
    *a = *b;
    *b = temp;
}

// Method 2: Using arithmetic operations
void swapUsingArithmetic(int *a, int *b) {
    *a = *a + *b;
    *b = *a - *b;
    *a = *a - *b;
}

// Method 3: Using XOR operation
void swapUsingXOR(int *a, int *b) {
    *a = *a ^ *b;
    *b = *a ^ *b;
    *a = *a ^ *b;
}

// Method 4: Using pointer arithmetic
void swapUsingPointers(int *a, int *b) {
    *a = (int)*(a + *b);
    *b = (int)(*a - *b);
    *a = (int)(*a - *b);
}

void printNumbers(int a, int b, const char *method) {
    printf("%s: a = %d, b = %d\n", method, a, b);
}

int main() {
    int num1, num2;
    
    printf("Enter first number (a): ");
    scanf("%d", &num1);
    printf("Enter second number (b): ");
    scanf("%d", &num2);
    
    printf("\nOriginal numbers: a = %d, b = %d\n\n", num1, num2);
    
    // Method 1: Using temporary variable
    int temp1 = num1, temp2 = num2;
    swapUsingTemp(&temp1, &temp2);
    printNumbers(temp1, temp2, "After swapping using temporary variable");
    
    // Method 2: Using arithmetic operations
    temp1 = num1, temp2 = num2;
    swapUsingArithmetic(&temp1, &temp2);
    printNumbers(temp1, temp2, "After swapping using arithmetic");
    
    // Method 3: Using XOR operation
    temp1 = num1, temp2 = num2;
    swapUsingXOR(&temp1, &temp2);
    printNumbers(temp1, temp2, "After swapping using XOR");
    
    // Method 4: Using pointer arithmetic
    temp1 = num1, temp2 = num2;
    swapUsingPointers(&temp1, &temp2);
    printNumbers(temp1, temp2, "After swapping using pointers");
    
    return 0;
}