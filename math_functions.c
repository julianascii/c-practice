#include <stdio.h>
#include <math.h>

int main() {

    int x = 9;
    float y = 3.14;
    float z = 5.66;
    int w = -8;
    int v = 3;

    x = sqrt(x);           // output: 3
    x = pow(x, 2);         // output: 81
    
    y = round(y);          // output: 3.000000
    y = ceil(y);           // output: 4.000000

    z = floor(z);          // output: 5.000000

    w = abs(w);            // output: 8

    v = log(v);            // output: 1.098612
    
// trigonometric functions
/* 
ideally, x is in radians
x = sin(x);
x = cos(x);
x = tan(x);
*/

    return 0;

}