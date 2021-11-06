#include <stdio.h>
#include "NumClass.h"

#define True 1
#define False 0


int main() {
    int num1, num2;
    scanf("%d %d", &num1, &num2);
    if (num2 < num1) {
        int temp = num2;
        num2 = num1;
        num1 = temp;
    }

    printf("The Armstrong numbers are:");
    for (int i = num1; i <= num2; ++i) {
        if (isArmstrong(i)) {
            printf(" %d", i);
        }
    }
    printf("\nThe Palindromes are:");
    for (int i = num1; i <= num2; ++i) {
        if (isPalindrome(i)) {
            printf(" %d", i);
        }
    }
    printf("\nThe Prime numbers are:");
    for (int i = num1; i <= num2; ++i) {
        if (isPrime(i)) {
            printf(" %d", i);
        }
    }
    printf("\nThe Strong numbers are:");
    for (int i = num1; i <= num2; ++i) {
        if (isStrong(i)) {
            printf(" %d", i);
        }
    }

    return 0;

}
