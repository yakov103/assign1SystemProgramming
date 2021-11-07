
#include "NumClass.h"
#include <stdio.h>
#include <math.h>

#define True 1
#define False 0

int isPalindrome(int num) {
    int temp = num;
    int r = 0;
    int reverse = 0;

    while (temp != 0) {
        r = temp % 10;
        reverse = reverse * 10 + r;
        temp /= 10;

    }

    if (num == reverse) {
        return True;
    }

    return False;


}

int isArmstrong(int num) {
    int size = 0;
    int temp = num;
    while (temp != 0) {
        size++;
        temp = temp / 10;
    }
    temp = num;
    int sum = 0;
    int reminder;

    while (temp != 0) {
        reminder = temp % 10;
        sum += pow(reminder, size);
        temp = temp / 10;

    }

    if (num == sum) {
        return True;
    }
    return False;


}



