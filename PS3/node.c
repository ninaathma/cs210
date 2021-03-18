#include "node.h"
#include <stdlib.h>
 node* createNode(int value) {
    node* n = (struct node*) malloc(sizeof(node));
        n->value = value;
        n->next = NULL;
    return n;

} //Create a new node with a given value
