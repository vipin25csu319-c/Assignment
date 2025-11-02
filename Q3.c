#include <stdio.h>

int subtract(int x, int y) {
    // Subtraction using bitwise operators
    // x - y is same as x + (~y + 1)
    // where (~y + 1) is 2's complement of y
    return x + (~y + 1);
}

int main() {
    int num1, num2;
    
    printf("Enter first number: ");
    scanf("%d", &num1);
    printf("Enter second number: ");
    scanf("%d", &num2);
    
    int result = subtract(num1, num2);
    printf("Result of %d - %d = %d\n", num1, num2, result);
    
    // Demonstrate how it works
    printf("\nHow it works:\n");
    printf("1. Take 2's complement of second number (%d)\n", num2);
    printf("2. First get 1's complement (~%d = %d)\n", num2, ~num2);
    printf("3. Add 1 to get 2's complement (%d + 1 = %d)\n", ~num2, ~num2 + 1);
    printf("4. Add first number to 2's complement: %d + (%d) = %d\n", 
           num1, ~num2 + 1, result);
    
    return 0;
}