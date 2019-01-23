#include <stdio.h>

int main(){
    while(1){
        int input = 0;
        int min = -1;
        int max = -1;
        int sum = 0;
        float avrage = 0.0;
        int counter = 0;
        printf("Enter negative value to print result.\n");
        while(1){
        printf("Enter a number: ");
        scanf("%d", &input);
        if(input < 0){
            break;
        }
        if(input > max || max == -1){
            max = input;
        }
        if(input < min || min == -1){
            min = input;
        }
        sum += input;
        counter++;
        }
        avrage = (float) sum/counter;
        printf("Min value: %d\n", min);
        printf("Max value: %d\n", max);
        printf("Sum: %d\n", sum);
        printf("Avrage: %f\n", avrage);
        char redo;
        printf("Do you want to enter a new sequence?\n");
        printf("1 = yes, 0 = no (default = no)");
        scanf(" %c", &redo);
        if(redo != '1'){
            break;
        }
    }
    return 0;
}
