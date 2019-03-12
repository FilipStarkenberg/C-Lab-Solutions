#include <stdio.h>
#include <time.h>
#include <stdlib.h>


int getRandom(){
    return rand() % 100;//Return a random number from 0 to 99

}


int main(){
    while(1){
        srandom(time(NULL)); //Used to get less predictable random. Using srandom instead of srand because i'm on linux.
        int userInput;
        int randomNumber = getRandom()+1;
        int counter = 0;
        while(1){
            counter++;
            printf("Guess a number: ");
            scanf("%d", &userInput);//get input from user
            if(randomNumber == userInput){//Check if number is correct
                printf("You guessed the correct number!\n");
                printf("It took you %d attempts before guessing the correct number\n", counter);
                break;
            }
            else if(randomNumber >= userInput){//Check if number is greater than input
                printf("The correct number is grater than %d\n", userInput);//Print to user
            }
            else{//Check if number is greater than input
                printf("The correct number is less than %d\n", userInput);//print to user
            }
        }
        printf("Do you want to play again?\n");
        char redo;
        printf("y = yes, n = no (default = no)");
        scanf(" %c", &redo);
        if(redo != 'y'){ break; }
    }
    return 0;
}
