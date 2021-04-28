//
// Created by Nina Athma on 4/5/21.
//

#ifndef PS4_RPN_H
#define PS4_RPN_H

#include <stdbool.h>
double evaluate(char* expression, int* status);
bool isOperator(char ch);
double recursivePower(double base, int pow);
int val1, val2;
char* converter(char* expression);

#endif //PS4_RPN_H
