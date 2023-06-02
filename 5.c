
#include <stdio.h>

struct PC {
    char* name;
    int speed;
		int RAM;
};
 
struct PC* fastestPC(struct PC data[], int n) {
    struct PC* result = &data[0]; 
    for (int i=1; i<n; i++) {
        if ((data[i].speed > result->speed) || (data[i].speed == result->speed && data[i].RAM > result->RAM)) {
            result = &data[i];
        

        }

    }
    return result;
}

int main() {
    int n = 3;
    struct PC arr[3] = {{"pc", 100, 50}, {"qwe", 100, 30}, {"max", 100, 45}};
    struct PC* result = fastestPC(arr, n);
    printf("%s", result->name);
}