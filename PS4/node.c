//
// Created by Nina Athma on 4/5/21.
//

#include "node.h"
#include <stdlib.h>

node* createNode(int value, int type) {
    node* n = (struct node*) malloc(sizeof(node));
    n->value = value;
    n->next = NULL;
    n->type = type;
    return n;

} //Create a new node with a given value
