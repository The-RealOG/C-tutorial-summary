#include <stdio.h>
#include <stdlib.h>

int main() {
    double num1;
    double num2;
    char op;


    //fgets works with strings ONLY
    printf("Enter a number: \n");
    scanf("%d", &num1);
    printf("Enter second number: \n");

    scanf("%d", &num2);
    int result = num1 + num2;
    printf("Answer: %d", result);
    
}