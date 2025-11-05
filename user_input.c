#include <stdio.h>

int main() {

    int age = 0;
    float gpa = 0.0f;
    char letter_grade = '\0';
    char name[30] = "";
        // name has a maximum size of 30 characters

    printf("Enter your age: ");        
    scanf("%d", &age);
    printf("Enter your gpa: ");
    scanf("%f", &gpa);

    return 0;

}