#include <stdio.h>
#include <string.h>

int getSpacesInString(char string[]){
    int stringLength = strlen(string);
    int counter = 0;

    //For every space in string => counter + 1
    for(int i = 0; i < stringLength; i++){
        if(string[i] == ' '){
            counter++;
        }
    }
    return counter;
}

char * get3rdString(char* string){
    char * address;
    int counter = 0;
    for(int i = 0; i < strlen(string); i++){
        if(counter > 1){//At the second word
            address = &string[i];
            break;
        }
        if(string[i] == ' '){//Word +1
            counter++;
        }
    }
    return address;
}


int main(){
    char input[100];
    scanf ("\n%[^\n]%*c", input);//Input untill \n
    printf("%d\n", getSpacesInString(input)+1);
    char* outString = get3rdString(input);
    printf("%s", outString);
    return 0;
}

