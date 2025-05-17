#include <stdio.h>
#include <stdlib.h>
#include<string.h>

int main() {
    //referencing pointers in c
   /* int age = 30;
    int* pAge = &age;
    double gpa = 3.4;
    double* pGpa = &gpa;
    char grade = 'A';
    char* aGrade = &grade; */

    //dereferencing pointers in c
    int age = 30;
    int* pAge = &age;

    printf("Pointer: %p\n", pAge);


    return 0;
}