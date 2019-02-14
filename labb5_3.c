#include <stdio.h>
#define ARRAY_SIZE 1001

void getArrayData(int* amount, int* number, int array[]){
    int max = -1;
    int Imax = -1;
    for(int i = 0; i < ARRAY_SIZE; i++){
        if(array[i] > max){
            max = array[i];
            Imax = i;
        }
    }
    *amount = max;
    *number = Imax;
}

int main(){
    int array[ARRAY_SIZE];
    for (int i = 0; i < ARRAY_SIZE; i++){
        array[i] = 0;
    }
    int input;
    int counter = 0;
    int amount;
    int number;
    while(1){
        scanf(" %d", &input);
        if(input > 1000 || input < 0 || counter > 100){
            break;
        }
        array[input]++;
        counter++;
    }
    if(counter == 0){
        printf("No number was enterd.\n");
        return 0;
    }
    getArrayData(&amount, &number, array);

    printf("The number %d was the most frequent number in the list. It occured %d times\n", number, amount);

    return 0;
}
