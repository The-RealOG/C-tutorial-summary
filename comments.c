#include <stdio.h>
#include <stdlib.h>

int main() {
    printf("comments are fun.\n");

    // constants
    const int NUM = 5; // the const makes the num variable immutable
    //industry practice to capitalize constant variables
    printf("%d\n", NUM);


    //getting user input in c
    printf("please enter your grade: ");
    int grade;

    scanf("%d", &grade);

    return 0;
}