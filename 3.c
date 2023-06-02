#include <stdio.h>

int main() {
    int prev = -1;  
    int now;       
    int count = 0;  
    scanf("%d", &now);

    while (now != 0) {
        if (prev != -1 && now == prev + 3) {
            count++;
        }
        prev = now;
        scanf("%d", &now);
    }
    printf("%d\n", count);
    return 0;
}
