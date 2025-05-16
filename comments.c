#include <stdio.h>
#include <stdlib.h>

int main() {
    printf("comments are fun.\n");

    // constants
    const int NUM = 5; // the const makes the num variable immutable
    //industry practice to capitalize constant variables
    printf("%d\n", NUM);


    //getting user input in c
    // printf("please enter your grade: ");
    // int grade;

    // scanf("%d", &grade);
    char name[20];

    //fgets function lets you get lots of characters simultaneously (including spaces)
    printf("Enter your name: ");
    fgets(name, 20, stdin); //stdin refers to the terminal input and also adds an \n char which prints a newline right after you call the variable
    printf("Your name is %s\n", name);

    return 0;
}