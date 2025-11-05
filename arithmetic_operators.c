#include <stdio.h>

int main() {

    // arithmetic operators include: = + - * / % ++ --
    int x = 2;
    int y = 3;
    int z = 0;

//  z = x + y;             ADDITION, output: 5
//  z = x - y;             SUBTRACTION, output: -1
//  z = x * y;             MULTIPLICATION, output: 6
//  z = x / y;             DIVISION, output: 0 -- bc we're working w int which can't store decimal portions
//  z = y % x;             MODULO , output: 1
//  x++;                   INCREMENT, output: 3
//  x--;                   DECREMENT, output: 1 
//  x+=2;                  output: 4
//  x-=2;                  output: 0
//  x*=3;                  output: 6
//  x/=2;                  output: 1

    printf("%d", z);

    int x1 = 2;
    float y1 = 3;
    float z1 = 0;
    z1 = x1 / y1;
    printf("%f", z1);        // 00.666667

    return 0;

}