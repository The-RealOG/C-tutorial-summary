#include <stdlib.h>
#include <string.h>
#include <stdio.h>

int main() {
    int nums[3][2] = { //creates a 2d array
                        {1, 2},
                        {3, 4},
                        {5, 6},
    };

    //altrenatively, we could initialize the 2d array then manually fill out:
    int nums1[3][2];
    nums1[0][1] = 7;

    printf("%d", nums[0][0]);
    return 0;
}