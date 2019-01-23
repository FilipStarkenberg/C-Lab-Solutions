#include <stdio.h>

int main(){
    int input;
    printf("Enter a number: ");
    scanf("%d", &input);
    if(input >= 0 && input <= 5){
        printf("Morsecode: ");
        switch(input){
            case 0:
                printf("-----\n");
                break;
            case 1:
                printf(".----\n");
                break;
            case 2:
                printf("..---\n");
                break;
            case 3:
                printf("...--\n");
                break;
            case 4:
                printf("....-\n");
                break;
            case 5:
                printf(".....\n");
                break;
        }
    }
    else{
        printf("Input error\n");
    }
    return 0;
}
