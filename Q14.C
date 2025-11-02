#include <stdio.h>
#include <stdbool.h>

#define MAX_SIZE 100

bool isPrime(int num) {
    if (num <= 1) return false;
    if (num <= 3) return true;
    
    if (num % 2 == 0 || num % 3 == 0) return false;
    

    for (int i = 5; i * i <= num; i += 6) {
        if (num % i == 0 || num % (i + 2) == 0)
            return false;
    }
    return true;
}
int countPrimes(int arr[], int size, int primes[]) {
    int count = 0;
    
    for (int i = 0; i < size; i++) {
        if (isPrime(arr[i])) {
            primes[count] = arr[i];
            count++;
        }
    }
    return count;
}

int main() {
    int arr[MAX_SIZE], primes[MAX_SIZE];
    int size;

    printf("Enter the size of array (1-%d): ", MAX_SIZE);
    scanf("%d", &size);

    if (size < 1 || size > MAX_SIZE) {
        printf("Invalid size! Please enter between 1 and %d\n", MAX_SIZE);
        return 1;
    }
    printf("\nEnter %d positive integers:\n", size);
    for (int i = 0; i < size; i++) {
        printf("Element %d: ", i + 1);
        scanf("%d", &arr[i]);
        
        if (arr[i] < 0) {
            printf("Please enter only positive integers!\n");
            return 1;
        }
    }
  
    int primeCount = countPrimes(arr, size, primes);
    
    printf("\nOriginal array: ");
    for (int i = 0; i < size; i++) {
        printf("%d", arr[i]);
        if (i < size - 1) printf(", ");
    }
    
    printf("\nNumber of prime numbers: %d", primeCount);
    
    if (primeCount > 0) {
        printf("\nPrime numbers found: ");
        for (int i = 0; i < primeCount; i++) {
            printf("%d", primes[i]);
            if (i < primeCount - 1) printf(", ");
        }
    }
    printf("\n");
    
    return 0;
}