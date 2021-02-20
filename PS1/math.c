#include <stdio.h>
#include <math.h>

float add(float var1, float var2) {
    return var1+var2;
}
float subtract(float var1, float var2) {
    return var1-var2;
}

float multiply(float var1, float var2) {
    return var1*var2;
}
float divide(float var1, float var2) {
    return var1/var2;
}
float power(float var1, float var2) {
    float result=var1;
    for(int i=1; i<var2;i++) {
        result=result*var1;
    }
    return result;
}
float recursivePower(float var1, int var2) {
    if(var2==0) {
        return 1;
    } else {
        return var1 * recursivePower(var1, var2-1);
    }
}

