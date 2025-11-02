#include <stdio.h>
#include <math.h>

int countDigits(int num) {
    int count = 0;
    while (num != 0) {
        num /= 10;
        count++;
    }
    return count;
}

int isArmstrong(int num) {
    int originalNum = num;
    int sum = 0;
    int digits = countDigits(num);
    
    while (num > 0) {
        int digit = num % 10;
        sum += pow(digit, digits);
        num /= 10;
    }
    
    return (sum == originalNum);
}

int main() {
    int number;
    
    printf("Enter a number to check if it's an Armstrong number: ");
    scanf("%d", &number);
    
    if (isArmstrong(number)) {
        printf("%d is an Armstrong number\n", number);
    } else {
        printf("%d is not an Armstrong number\n", number);
    }
    
    return 0;
}