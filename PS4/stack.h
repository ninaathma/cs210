//
// Created by Nina Athma on 4/5/21.
//

#ifndef PS4_STACK_H
#define PS4_STACK_H

#include "node.h"

node* head;
void push(node* node);
node* pop();
node* peek();
int nodeType();
void printStack();

#endif //PS4_STACK_H
