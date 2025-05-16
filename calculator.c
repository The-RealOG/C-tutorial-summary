#include <stdio.h>
#include <stdlib.h>

int main() {
    int num1;
    int num2;


    //fgets works with strings ONLY
    printf("Enter first number: \n");
    scanf("%d", &num1);
    printf("Enter second number: \n");

    scanf("%d", &num2);
    int result = num1 + num2;
    printf("Answer: %d", result);
    
}