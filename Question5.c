#include <stdio.h>
#include <stdlib.h>

int randomMean(int seed, int length) {
    srand(seed);
    int randTotal;
    for (int i = 0; i <= length; i++) {
        auto randInt = rand();
        printf(randInt, "%d");
        randTotal = randTotal + randInt;
    }
    return (randTotal/length);
}

int main() {
    int userSeed;
    int userLength;
    printf("What is your seed? ");
    scanf("%d", &userSeed);
    printf("How many numbers do you want to use? ")
    scanf("%d", &userLength);
    auto result = randomMean(userSeed, userLength);
    printf("Your random mean is: ", result);
    return 0;
}