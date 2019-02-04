#include <stdio.h>
#include <math.h>
#include <string.h>


int squareRoot(float * number){
    if(*number > 0){
        *number = sqrt(*number);
        return 1;
    }
    else return 0;
}


int main(){
    float input;
    scanf(" %f", &input);
    float* value = &input;
    int returnValue = squareRoot(value);
    if(returnValue){
        printf("%f\n", *value);
    }
    else{
        printf("Can't calculate the squareroot of a negetive number\n");
    }

    return 0;

}
