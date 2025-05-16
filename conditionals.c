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

    printf("The max: %d", max(8, 10));
    return 0;
}