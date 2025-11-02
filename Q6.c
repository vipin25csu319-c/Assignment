#include <stdio.h>
#include <math.h>
#include <string.h>

// Function to convert binary to decimal
int binaryToDecimal(long long binary) {
    int decimal = 0, i = 0;
    while (binary != 0) {
        decimal += (binary % 10) * pow(2, i);
        binary /= 10;
        i++;
    }
    return decimal;
}

// Function to convert decimal to binary
long long decimalToBinary(int decimal) {
    long long binary = 0;
    int remainder, i = 1;
    
    while (decimal != 0) {
        remainder = decimal % 2;
        decimal /= 2;
        binary += remainder * i;
        i *= 10;
    }
    return binary;
}

// Function to validate binary input
int isValidBinary(long long binary) {
    while (binary != 0) {
        if (binary % 10 != 0 && binary % 10 != 1)
            return 0;
        binary /= 10;
    }
    return 1;
}

int main() {
    int choice;
    
    printf("Number System Conversion\n");
    printf("1. Binary to Decimal\n");
    printf("2. Decimal to Binary\n");
    printf("Enter your choice (1 or 2): ");
    scanf("%d", &choice);
    
    switch(choice) {
        case 1: {
            long long binary;
            printf("Enter a binary number: ");
            scanf("%lld", &binary);
            
            if (!isValidBinary(binary)) {
                printf("Error: Invalid binary number!\n");
                return 1;
            }
            
            printf("Decimal equivalent: %d\n", binaryToDecimal(binary));
            break;
        }
        case 2: {
            int decimal;
            printf("Enter a decimal number: ");
            scanf("%d", &decimal);
            
            if (decimal < 0) {
                printf("Error: Please enter a positive number!\n");
                return 1;
            }
            
            printf("Binary equivalent: %lld\n", decimalToBinary(decimal));
            break;
        }
        default:
            printf("Invalid choice!\n");
    }
    
    return 0;
}