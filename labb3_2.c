#include <stdio.h>
#include <time.h>
#include <stdlib.h>


int getRandom(){
    return rand() % 101;

}


int main(){
    while(1){
        srandom(time(NULL)); //Used to get less predictable random. Using srandom instead of srand because i'm on linux.
        int userInput;
        int randomNumber = getRandom();
        int counter = 0;
        while(1){
            counter++;
            printf("Guess a number: ");
            scanf("%d", &userInput);
            if(randomNumber == userInput){
                printf("You guessed the correct number!\n");
                printf("It took you %d attempts before guessing the correct number\n", counter);
                break;
            }
            else if(randomNumber >= userInput){
                printf("The correct number is grater than %d\n", userInput);
            }
            else{
                printf("The correct number is less than %d\n", userInput);
            }
        }
        printf("Do you want to play again?\n");
        char redo;
        printf("1 = yes, 0 = no (default = no)");
        scanf(" %c", &redo);
        if(redo != '1'){ break; }
    }
    return 0;
}
