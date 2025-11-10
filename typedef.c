#include <stdio.h>

typedef int Number;
typedef char string[50];
typedef char initials[3]; // 3 due to null terminator

int main() {

    //typedef = reserved keyword that gives an existing datatype a "nickname"
    //          helps simplufy complex types and improves code readability
    //          typedef existing_type new_name;

    Number x = 3;
    Number y = 4;
    Number z = x + y;
    printf("%d\n", z); // outputs 7

    string name = "Juliana cat lover";
    printf("%s", name);

    initials user1 = "JS";
    initials user2 = "WJ";
    initials user3 = "QP";
    initials user4 = "DA";

    printf("\n%s\n", user1);
    printf("%s\n", user2);
    printf("%s\n", user3);
    printf("%s\n", user4);

    return 0;
}