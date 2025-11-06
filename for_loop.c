#include <stdio.h>
#include <windows.h>


int main() {

    for(int i = 1; i <= 10; i++) {
        Sleep(1000);
        printf("%d\n", i);
    }

    printf("Happy New Year!\n");

    return 0;
}