#include <stdio.h>
#include "math.h"

int main() {
    //printf("Hello, World!\n");

    int run = 0;
    float result;

    do{
        printf("Enter an operation:");
        float var1;
        float var2;
        char oper;

        scanf("%f%c%f", &var1, &oper, &var2);

        switch(oper) {
            case '+':
                result = add(var1,var2);
                break;
            case '-':
                result = subtract(var1,var2);
                break;
            case '*':
                result = multiply(var1,var2);
                break;
            case '/':
                result = divide(var1,var2);
                break;
            case '^':
                result = power(var1,(int)var2);
                break;
            case '$':
                result = recursivePower(var1, (int)var2);
                break;
            default:
                run = 1;
                result = -1;
                printf("Loop end.");
        }
        printf("Result = %.2f\n",result);

    }while (run==0);
    printf("Operation complete!\n");
}
