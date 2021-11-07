
#include "NumClass.h"
#include <stdio.h>
#include <math.h>

#define True 1
#define False 0


int isPalindromeRecursive(int num, int temp, int reverse) {
    if (temp == 0) {
        if (num == reverse) {
            return True;
        } else {
            return False;
        }
    }

    int r = temp % 10;
    reverse = reverse * 10 + r;
    temp = temp / 10;
    return isPalindromeRecursive(num, temp, reverse);

}

int isPalindrome(int num) {
    return isPalindromeRecursive(num, num, 0);
}

int isArmstrongRecursive(int num, int size) {
    if (num == 0) {
        return 0;
    }
    int r = num % 10;
    return pow(r, size) + isArmstrongRecursive(num / 10, size);

}

int countDigis(int num) {
    if (num == 0) {
        return 0;
    }
    return 1 + countDigis(num / 10);
}


int isArmstrong(int num) {
    int size = countDigis(num);
    return num == isArmstrongRecursive(num, size);

}


