#include <stdio.h>
#include <string.h>
#include <ctype.h>
#include <stdlib.h>


typedef struct Products {
    char name[50];
    float amount;
    char unit[50];
}Product;



void addProductToList(Product* list, int* size){
    printf("Enter product name: ");
    scanf("\n%[^\n]%*c", list[*size].name);
    printf("Enter amount: ");
    scanf("%f", &list[*size].amount);
    printf("Enter unit: ");
    scanf("\n%[^\n]%*c", list[*size].unit);
    *size = *size + 1;
}

void printList(Product* list, int size){
    int strMax = 0;
    for(int i = 0; i < size; i++){
        if(strlen(list[i].name) > strMax){
            strMax = strlen(list[i].name);
        }
    }
    if(size > 0){
        printf("\nList:");
        for(int i = 0; i < size; i++){
            printf("\n%-*s%4g %s", strMax+4, list[i].name, list[i].amount, list[i].unit);
        }
        printf("\n");
    }
    else{
        printf("\nYour list is empty.\n");
    }
}

char* removeSpecial(char* inputString)
{
    int i,j;
    char *outputString=inputString;
    for (i = 0, j = 0; i < strlen(inputString); i++,j++)
    {
        if (isalpha(inputString[i]) || inputString[i] == '\n')
            outputString[j]=inputString[i];
        else
            j--;
    }
    outputString[j]=0;
    return outputString;
}



int main(){
    Product shoppingList[5];
    int listLength = 0;
    int quit = 0;
    while(1){
        int command;
        char userInput[100] = "";
        printf("\nWelcome to your shopping list.\n1 - Add product to list.\n2 - Print shopping list.\n3 - Quit.\nEnter command: ");
        fgets(userInput, 100, stdin);
        if(sscanf (userInput, "%d", &command)){
            switch(command){
                case 1:
                    addProductToList(shoppingList, &listLength);
                    break;
                case 2:
                    printList(shoppingList, listLength);
                    break;
                case 3:
                    quit = 1;
                    break;
                default:
                    printf("input error. \n");
                    break;
            }
        }
        else{
            printf("input error. \n");
        }
        if(quit){
            break;
        }
    }
    return 0;
}
