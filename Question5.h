#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int randomMean(int seed, int length) {
    srand(time(NULL));
    int randTotal = 0;
    for(int i = 0; i < length; i++) {
        int randInt = rand() % seed;
        printf(" %u ", randInt);
        randTotal = randTotal + randInt;
    }
    printf("\n");
    return randTotal / length;
}