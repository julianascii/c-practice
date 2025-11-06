#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {

    srand(time(NULL));
    int randomNumber = rand() % 2; 
        // this gives either "0" or "1"
    printf("%d", randomNumber);

    int min = 50;
    int max = 100;
    int randomNumber1 = (rand() % (max - min + 1)) + min;
    printf("%d", randomNumber1);

/*
    printf("%d", RAND_MAX);
        - checks the maximum value
*/
    return 0;
}