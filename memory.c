#include <stdio.h>
#include <string.h>
#include <stdlib.h>


//RAM -> Random Access Memory
//Think of it as block of boxes with nested blocks within it.
int main() {
    int age = 30;
    double gpa = 3.4;
    char grade = 'A';


    printf("age: %p\ngpa: %p\ngrade: %p", &age, &gpa, &grade);
    //%p -> returns the memory address in some kind of hexadecimal system
    return 0;
}