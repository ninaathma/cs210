//
// Created by Nina Athma on 4/5/21.
//

#include "rpn.h"
#include "node.h"
#include "stack.h"
#include <string.h>
#include <ctype.h>
#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

double evaluate(char* expression, int* status) {
    char *token;
    double result = 0;
    char operators[] = "+-*/^";
    const char space[2] = " ";
    //first token
    token = strtok(expression, space);

    //rest of tokens
    while(token != NULL) {
        //get operator OR number
        if (!isOperator(token)) {
            double val = strtod(token, NULL);
            push(createNode(val, 1));
        }
        else{
            //pop out vals, check that there are at least 2
            if(peek() == NULL) {
                status = -1;
                printf("Error.");
                return 0;
            }
            double val = pop()->value;
            //these are chars to compare with
            const char add = '+';
            const char sub = '-';
            const char multiply = '*';
            const char div = '/';
            const char pow = '^';

            //check if operation is null
            char *addWorks = strchr(token, add);
            char *subWorks = strchr(token, sub);
            char *multiplyWorks = strchr(token, multiply);
            char *divWorks = strchr(token, div);
            char *powWorks = strchr(token, pow);

            if(addWorks != NULL) push(createNode(val1+val2, 1));
            else if (subWorks != NULL) push(createNode(val1-val2, 1));
            else if (multiplyWorks != NULL) push(createNode(val1*val2, 1));
            else if (powWorks != NULL) push(createNode(recursivePower(val1, val2), 1));
            else {
                status = -1;
                printf("Error.");
                return 0;
            }

        }
        //increment token
        token = strtok(NULL, space);
    }
    result = pop()->value;
    return result;
} //evaluate

bool isOperator(char ch) {
    if (ch=='+' || ch=='-' || ch=='*' || ch=='/' || ch=='^') return true;
    return false;
}
}

double recursivePower(double base, int pow) {
    if(pow <= 0) return 1;
    double result = base*recursivePower(base, pow-1);
    return result;

}

