#include "Question5.h"
#pragma once

int main() {
    int userSeed;
    int userLength;
    printf("What is your seed? ");
    scanf("%u", &userSeed);
    printf("How many numbers do you want to use? ");
    scanf("%u", &userLength);
    int result = randomMean(userSeed, userLength);
    printf("Your random mean is: %u ", result);
    return 0;
}