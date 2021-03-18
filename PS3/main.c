#include "node.h"
#include "list.h"
#include <limits.h>
#include <stdbool.h>
#include <stdio.h>

int main() {
    printf("Hello World!\n");

    printf("Problem 1:\n");
    int array[15] = {89, 39, 18, 96, 71, 25, 2, 55, 60, -8, 9, 42, 69, 96, 24};
    for (int count=0; count<15; count++) {
        node* nextNode = createNode(array[count]);
        addNode(nextNode);
    }
    printList();
    printf("\n");


    printf("Problem 2: Delete Largest\n");
    //deleteLargest();
    printList();
    printf("\n");


    printf("Problem 3:\n");
    printf("%i", countVals());




}
