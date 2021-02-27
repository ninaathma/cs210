#include <stdio.h>
#include "ps2.c"
#include <stdbool.h>

void main() {
    double a[] = {72, 90,100,36,21,15,76,-6,63,41,99,27,3,66,19,16,27,47,0,23};
    double b[] = {72, 90,100,36,21,15,76,-6,63,41,99,27,3,66,18,16,27,47,23};

    double *arr1=&a, *arr2=&b;
    int length1=sizeof(a)/sizeof(*arr1), length2=sizeof(b)/sizeof(*arr2);

    if (compareArrays(arr1, length1, arr2, length2)) printf("True");
    else printf("False");

    // printf("%f", inner_product(arr1, arr2, length));
    //large_and_small(arr1, length, &largest, &smallest);
}
