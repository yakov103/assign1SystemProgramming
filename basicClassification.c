//
// Created by Yakov Khodorkovski on 05/11/2021.
//
#include <stdio.h>
#include <math.h>
#include "NumClass.h"

#define True 1
#define False 0

int isPrime(int num) {

    if (num <= 0) {
        return False;
    }
    if (num == 1) {
        return True;
    }

    for (int i = 2; i <= sqrt(num); ++i) {
        if (num % i == 0) {
            return False;
        }
    }
    return True;
}

int fact(int f) {
    if (f == 0)
        return 1;
    return (f * fact(f - 1));
}

int isStrong(int num) {
    int sum = 0;
    int temp = num;
    int r;
    while (temp != 0) {
        r = temp % 10;
        int f = fact(r);
        temp = temp / 10;
        sum += f;
    }

    if (sum == num) {
        return True;
    }

    return False;


}

