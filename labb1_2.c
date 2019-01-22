#include <stdio.h>

int main(){
    int input1, input2;
    printf("Enter value: ");
    scanf("%d", &input1);
    printf("Enter another value: ");
    scanf("%d", &input2);
    int result = input1 + input2;
    printf("%d + %d = %d\n", input1, input2, result);
    return 0;

}
