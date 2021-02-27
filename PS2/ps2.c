#include <stdio.h>
#include "ps2.h"


void large_and_small(const int* array, int length, int* largest, int* smallest) {
    *largest = *smallest = *array;

    int *ind;
    for(ind=array;ind<array+length; ind++) {
        if (*ind>*largest) *largest=*ind;
        else if (*ind<*smallest) *smallest=*ind;
    }
    printf("largest: %d\n",*largest);
    printf("smallest: %d\n", *smallest);

    }
double inner_product(const double* leftArray, const double* right_array, int length) {
    double innerProduct=0;
    for (int ind=0; ind<length; ind++) {
        double product=(*(leftArray+ind))*(*(right_array+ind));
        innerProduct+=product;
    }
    return innerProduct;

}
bool compareArrays(int* left, int left_length, int* right, int right_length) {
    if(left_length!=right_length) return false;

    for(int ind=0; ind<left_length;ind++) {
        if (*(left+ind)!=*(right+ind)) return false;
    }
    return true;

}
