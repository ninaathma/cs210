//
// Created by Nina Athma on 4/5/21.
//

#include "stack.h"
#include "node.h"
#include <stdlib.h>
#include <stdbool.h>
#include <stdio.h>

void push(struct node* node) {
    if(node->type == 1) {
        if(head==NULL) {
            head=node;
            return;
        }
        struct node *temp = head;
        head=node;
        head->next = temp;
        return;
    }
} //push

node* pop() {
    if(head==NULL) return NULL;
    node* temp = head;
    head=head->next;
    return temp;
} //pop

node* peek() {
    return head;
} //peek

void clearStack() {
    head=NULL;
} //clearStack

bool stackEmpty() {
    if(head==NULL) {
        return true;
    }
    return false;
} //stackEmpty

int nodeType() {
    return head->type;
} //nodeType

void printStack() {
    node* walker = head;
    printf("\n Stack: \n");
    while(walker != NULL) {
        printf("%f", walker->value);
        walker = walker->next;
    }
} //printStack


