#include <stdio.h>

void printFibonacci(int n) {
    int first = 0, second = 1, next;
    int i;
    
    printf("Fibonacci Series up to %d terms:\n", n);
    
    if (n >= 1)
        printf("%d", first);
    if (n >= 2)
        printf(", %d", second);
    
    for (i = 3; i <= n; i++) {
        next = first + second;
        printf(", %d", next);
        first = second;
        second = next;
    }
    printf("\n");
}

int main() {
    int terms;
    
    printf("Enter the number of terms (1-50): ");
    scanf("%d", &terms);
    
    if (terms < 1 || terms > 50) {
        printf("Please enter a number between 1 and 50\n");
        return 1;
    }
    
    printFibonacci(terms);
    
    return 0;
}