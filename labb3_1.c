#include <stdio.h>


float convertToEuro(float sek, float exchangeRate){
    return sek * exchangeRate;//Convert to Euro
}

int main(){
    float sek;
    printf("Enter amount in SEK: ");
    scanf("%f", &sek);//Get input from user
    printf("%f SEK converts to %f Euro\n", sek, convertToEuro(sek, 0.097));//print to user
    return 0;
}


