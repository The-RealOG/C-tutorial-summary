#include <stdlib.h>
#include <stdio.h>

int max(int num1, int num2) {
    int result;

    if (num1 > num2) {
        result = num1;
    } else {
        result = num2;
    }

    return result;
}

int main() {

    //printf("The max: %d", max(8, 10));

    //WHILE LOOPS
    int index = 1;

    while (index <= 5) {
        printf("%d\n", index);
        index ++;
    }
    return 0;
}