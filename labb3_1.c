#include <stdio.h>


float convertToSek(float sek, float exchangeRate){
    return sek * exchangeRate;
}

int main(){
    float sek;
    printf("Enter amount in SEK: ");
    scanf("%f", &sek);
    printf("%f SEK converts to %f Euro\n", sek, convertToSek(sek, 0.097));
    return 0;
}


