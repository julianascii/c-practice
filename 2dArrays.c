#include <stdio.h>

int main() {

    // 2D array = array where each element is an array
    //            array[][] = {{}, {}, {}};

    int numbers[][3] = {{1, 2, 3}, 
                        {4, 5, 6}, 
                        {7, 8, 9}};
    // # columns = 3
    printf("%d ", numbers[0][0]);    // output: 1
    printf("%d ", numbers[0][1]);    // output: 2
    printf("%d\n", numbers[0][2]);    // output: 3
    printf("\n");
    int size = sizeof(numbers) / sizeof(numbers[0]);
    int size1 = sizeof(numbers[0]) / sizeof(numbers[0][0]);

    for(int i = 0; i < size; i++) {
        for(int j = 0; j < size1; j++) {
            printf("%d ", numbers[i][j]);
        }
        printf("\n");
    }

    return 0;
}