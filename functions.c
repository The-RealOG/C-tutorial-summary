#include <stdlib.h>
#include <stdio.h>

// Helper functions
void sayHi(char name[]) {
    printf("Hi %s\n", name);
}

//takes a num and returns num^3
int exponent(int n) {
    return n*n*n;
}

int main() {

    printf("Yoo  ");
    sayHi("Mike");
    sayHi("Val");
    sayHi("Oscar");

    printf("my num is %d ", exponent(6));


    return 0;
}

