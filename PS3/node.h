#ifndef PS3NEW_NODE_H
#define PS3NEW_NODE_H

typedef struct node {
    int value;
    struct node* next;
} node;

struct node* createNode(int value); //Create a new node with a given value

#endif //PS3NEW_NODE_H