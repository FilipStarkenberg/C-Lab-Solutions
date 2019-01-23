#include <stdio.h>

int main(){
    int angle;
    printf("Enter a angle beween 0 and 180: ");
    scanf("%d", &angle);
    if(angle > 0 && angle < 180){
        if(angle == 90){
            printf("The angle is perpendicular\n");
        }
        else if(angle > 90){
            printf("The angle is obtuse\n");
        }
        else{
            printf("The angle is acute\n");
        }
    }
    else{
        printf("Incorrect input\n");
    }
    return 0;
}
