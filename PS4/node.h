//
// Created by Nina Athma on 4/5/21.
//

#ifndef PS4_NODE_H
#define PS4_NODE_H

typedef struct node {
    union {
        double value;
        char operator;
    } contents;
    int type;
    int precedence;
    node *next;
} node;

node* createNode(int value, int type);

#endif //PS4_NODE_H
