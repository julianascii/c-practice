#include <stdio.h>
# include <string.h>


int main() {

    int age = 0;
    float gpa = 0.0f;
    char letter_grade = '\0';
    char name[50] = "";
        // name has a maximum size of 50 characters

    printf("Enter your age: ");        
    scanf("%d", &age);

    printf("Enter your gpa: ");
    scanf("%f", &gpa);

    printf("Enter your grade: ");
    scanf(" %c", &letter_grade);
        // the blank space before %c tells program to skip new line character

    getchar();   // also clears new line character
    printf("Enter your full name: ");
    fgets(name, sizeof(name), stdin);
    name[strlen(name) - 1] = '\0';

    printf("%s\n", name); // now include the <string.h> to delete new line after print
    printf("%d\n", age);
    printf("%.2f\n", gpa);
    printf("%c\n", letter_grade);

    return 0;

}
