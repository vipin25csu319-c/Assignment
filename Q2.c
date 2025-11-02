#include <stdio.h>

int findHCF(int a, int b) {
    int temp;
    while (b != 0) {
        temp = b;
        b = a % b;
        a = temp;
    }
    return a;
}

int main() {
    int num1, num2;
    
    printf("Enter two positive integers to find their HCF:\n");
    printf("Enter first number: ");
    scanf("%d", &num1);
    printf("Enter second number: ");
    scanf("%d", &num2);
    
    if (num1 <= 0 || num2 <= 0) {
        printf("Please enter positive integers only!\n");
        return 1;
    }
    int hcf = findHCF(num1, num2);
    printf("HCF of %d and %d is: %d\n", num1, num2, hcf);
    
    return 0;
}