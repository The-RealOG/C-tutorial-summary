#include <stdio.h>
#include <stdlib.h>

int main() {
    double num1;
    double num2;
    char op; // stores the user's preferred operator


    //fgets works with strings ONLY
    printf("Enter a number: \n");
    scanf("%lf", &num1); // lf because num1 is of type double

    printf("Enter operator: ");
    scanf(" %c", &op);

    printf("Enter second number: \n");
    scanf("%lf", &num2);

    //int result = num1 + num2;
    //printf("Answer: %d", result);


    if (op == '+') {
        printf("%f", num1 + num2);
    } else if (op == '-') {
        printf("%f", num1 - num2);
    } else if (op == '/') {
        printf("%f", num1 / num2);
    } else if (op == '*') {
        printf("%f", num1 * num2);
    } else{
        printf("Invalid statement");
    }

    return 0;
    
}