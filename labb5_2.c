#include <stdio.h>
#include <string.h>

int getSpacesInString(char string[]){
    int stringLength = strlen(string);
    int counter = 0;
    for(int i = 0; i < stringLength; i++){
        if(string[i] == ' '){
            counter++;
        }
    }
    return counter;
}

char * get3rdString(char* string){
    char* outputString = string;
    int counter = 0;
    int i,j;
    for(i = 0, j = 0; i < strlen(string); i++,j++){
        if(counter > 1){
            outputString[j] = string[i];
        }
        else{
            j--;
        }
        if(string[i] == ' '){
            counter++;
        }
    }
    outputString[j] = 0;
    return outputString;
}


int main(){
    char input[100];
    scanf ("\n%[^\n]%*c", input);
    printf("%d\n", getSpacesInString(input));
    char* outString = get3rdString(input);
    printf("%s", outString);
    return 0;
}

