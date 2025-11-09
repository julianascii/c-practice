#include <stdio.h>

int main() {
/*array = fixed-size collection of elements of the same data type*/
    
    char grades[] = {'A', 'B', 'C', 'D', 'E', 'F'};
    int numbers[] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
    char name[] = "Juliana";

    numbers[0] = 100;

    printf("%d", numbers[0]);  // output: 100
    printf(" %c", grades[0]);  // output: A
    printf(" %c\n", name[0]);    // output: J

    int size = sizeof(numbers) / sizeof(numbers[0]);
//    printf("%d\n", sizeof(numbers));     // output: 40
//    printf("%d\n", sizeof(numbers[0]));  // output: 4

    for(int i = 0; i < size; i++) {
        printf("%d\n", numbers[i]);
    }

    return 0;
}