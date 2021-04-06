//
// Created by Nina Athma on 4/5/21.
//

#ifndef PS4_NODE_H
#define PS4_NODE_H

typedef struct node {
    double value;
    int type;
    struct node* next;
} node;

node* createNode(int value, int type);

#endif //PS4_NODE_H
