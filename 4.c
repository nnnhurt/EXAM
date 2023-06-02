#include <stdio.h>
#include <string.h>

int toDecimal(char str[]) {
    int dec = 0;
    int base = 1;
    int len = strlen(str);
    for (int i = len - 1; i >= 0; i--) {
        if (str[i] == '1') {
            dec += base;
        }
        base *= 2;
    }
    return dec;
}

int main() {
    char binaryString[] = "101010";
    int dec = toDecimal(binaryString);
    printf("%s %d\n", binaryString, dec);
    return 0;
}
