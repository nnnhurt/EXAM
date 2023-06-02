
#include <stdio.h>

float sumFoo(int n) {
    float sum = 0;
    for (int i=1; i<=n; i++) {
    sum += (float)1 / i / i;
    }
    return sum; 
}

int main () {
    printf("%f", sumFoo(3));
    return 0;
}