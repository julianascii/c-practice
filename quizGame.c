#include <stdio.h>
#include <ctype.h>

int main() {

    char questions[][100] = {"What is the largest planet of the solar system?",
                             "What is the hottest planet in the solar system?",
                             "What is the third planet of the solar system?",
                             "How many moons does Jupiter have?"};

    char choices[][100] = {"A. Neptune\nB. Uranus\nC. Jupiter\nD. Saturn\n",
                           "A. Mercury\nB. Venus\nC. Earth\nD. Mars\n",
                           "A. Mercury\nB. Venus\nC. Earth\nD. Mars\n",
                           "A. 96\nB. 97\nC. 98 \nD. 99\n"};

    char answerKey[4] = {'C', 'B', 'C', 'B'};
    
    int size = sizeof(answerKey) / sizeof(answerKey[0]);

    int score = 0;
    char guess = '\0';
    for(int i = 0; i < size; i++) {
        printf("\n%s\n", questions[i]);
        printf("%s", choices[i]);
        scanf(" %c", &guess);

        guess = toupper(guess);

        if(guess == answerKey[i]) {
            printf("CORRECT!\n");
            score++;
        } else {
            printf("INCORRECT!\n");
        }
    }
    printf("\nQuiz complete! Your final score is %d out of %d points.", score, size);

    return 0;
}