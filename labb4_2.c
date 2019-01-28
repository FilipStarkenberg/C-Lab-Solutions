#include <stdio.h>
#include <string.h>
#include <ctype.h>
#define STRING_MAX 1000


int isPalindrome(char inputString[]){
    int stringLength = (int) strlen(inputString);
    for(int i = 0; i < stringLength/2; i++){
        if(inputString[i] != inputString[stringLength-i-1]){
            return 0;
        }
    }
    return 1;

}

char* removeSpecial(char* inputString)
{
    int i,j;
    char *outputString=inputString;
    for (i = 0, j = 0; i<strlen(inputString); i++,j++)
    {
        if (isalpha(inputString[i]))
            outputString[j]=inputString[i];
        else
            j--;
    }
    outputString[j]=0;
    return outputString;
}

char* stringToLower(char* inputString){
    char* outputString = inputString;
    for(int i = 0; i < strlen(inputString); i++){
        outputString[i] = tolower(inputString[i]);
    }
    return outputString;


}

int main(){
    while(1){
        char inputString[STRING_MAX];
        printf("Enter string: ");
        scanf("\n%[^\n]%*c", inputString);

        char* noSpaceString = removeSpecial(inputString);
        char* lowerString = stringToLower(noSpaceString);
        if(isPalindrome(lowerString) == 1){
            printf("%s is a palindrome.\n", lowerString);
        }
        else{
            printf("%s is not a palindrome.\n", lowerString);
        }

        char redo;
        printf("Do you want to play again?\n");
        printf("1 = yes, 0 = no (default = no)");
        scanf(" %c", &redo);
        printf("\n");
        if(redo != '1'){
            break;
        }
    }
    return 0;
}



