#include <stdio.h>
#include <time.h>
#include <stdlib.h>

int getRandom(int n){
    return rand() % (n+1);
}

int countElement(int inputArray[], int arraySize, int elementToCount){
    int counter = 0;
    for(int i = 0; i < arraySize; i++){
        if(elementToCount == inputArray[i]){
            counter++;
        }
    }
    return counter;

}

void getRandomArray(int array[], int size);

int main(){
    while(1){
        srandom(time(NULL)); //Used to get less predictable random. Using srandom instead of srand because i'm on linux. Seed is updated every second so runing the program multiple times in the same secon will have the exact same random values.
        int size = getRandom(100);
        int array[size];
        getRandomArray(array, size);
        for(int i = 0; i < size; i++){
            printf("Index: %d \t Value: %d\n", i, array[i]);
        }
        printf("\nArray size: %d\n", size);
        printf("Enter search number: ");
        int userInput;
        scanf("%d", &userInput);
        printf("The number %d appears %d time(s) in array\n", userInput, countElement(array, size, userInput));
        char redo;
        printf("Do you want to run sequence again?\n");
        printf("1 = yes, 0 = no (default = no)");
        scanf(" %c", &redo);
        if(redo != '1'){
            break;
        }
    }
    return 0;
}


void getRandomArray(int array[], int size){
    for(int i = 0; i < size; i++){
        array[i] = getRandom(9) + 1;
    }
}