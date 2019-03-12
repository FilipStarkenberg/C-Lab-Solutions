#include <stdio.h>
#include <string.h>
#include <ctype.h>
#include <stdlib.h>

#define INPUT_MAX 100

typedef struct Products {
    char name[INPUT_MAX];
    float amount;
    char unit[INPUT_MAX];
}Product;


typedef struct shopping_lists{
    Product *list;
    size_t used;
    size_t size;
}shoppingList;

void initializeArray(shoppingList *list, size_t initialSize){
    list->list = (Product *)malloc(initialSize * sizeof(Product));
    list->used = 0;
    list->size = initialSize;
}


void insertList(shoppingList *list, Product product){
    if(list->used == list ->size){
        list->size++;
        list->list = (Product *)realloc(list->list, list->size * sizeof(Product));
    }
    list->list[list->used++] = product;
}

void freeList(shoppingList *list){
    free(list->list);
    list->list = NULL;
    list->used = list->size = 0;
}



void addProductToList(shoppingList *list){
    Product tempProduct;
    char userInput[INPUT_MAX];
    float temp;
    char str[INPUT_MAX];
    while(1){
        printf("Enter product name: ");
        fgets(userInput, INPUT_MAX, stdin);
        if(sscanf(userInput, "%f", &temp) == 1){
            printf("Input error.\n");
        }
        else if(sscanf(userInput, "\n%[^\n]%*c", str) == 1){
            strcpy(tempProduct.name, str);
            break;
        }
        else{
            printf("Input error.\n");
        }
    }
    while(1){
        printf("Enter amount: ");
        fgets(userInput, INPUT_MAX, stdin);
        if(sscanf(userInput, "%f", &temp) == 1){
            if(temp > 0){
                tempProduct.amount = temp;
                break;
            }
            else{
                printf("Input error.\n");
            }
        }
        else{
            printf("Input error.\n");
        }
    }
    while(1){
        printf("Enter unit: ");
        fgets(userInput, INPUT_MAX, stdin);
        if(sscanf(userInput, "%f", &temp) == 1){
            printf("Input error.\n");
        }
        else if(sscanf(userInput, "\n%[^\n]%*c", str) == 1){
            strcpy(tempProduct.unit, str);
            break;
        }
        else{
            printf("Input error.\n");
        }
    }
    insertList(list, tempProduct);
}

void printList(Product* list, int size){
    int strMax = 0;
    for(int i = 0; i < size; i++){
        if(strlen(list[i].name) > strMax){
            strMax =(int) strlen(list[i].name);
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


int main(){
    shoppingList list;
    initializeArray(&list, 1);

    int quit = 0;
    while(1){
        int command;
        char userInput[100] = "";
        printf("\nWelcome to your shopping list.\n1 - Add product to list.\n2 - Print shopping list.\n3 - Quit.\nEnter command: ");
        fgets(userInput, 100, stdin);
        if(sscanf (userInput, "%d", &command)){
            switch(command){
                case 1:
                    addProductToList(&list);
                    break;
                case 2:
                    printList(list.list, (int)list.used);
                    break;
                case 3:
                    quit = 1;
                    break;
                default:
                    printf("Input error. \n");
                    break;
            }
        }
        else{
            printf("Input error. \n");
        }
        if(quit){
            freeList(&list);
            break;
        }
    }
    return 0;
}
