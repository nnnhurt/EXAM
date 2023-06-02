#include <stdio.h>
#include <stdlib.h>
struct Coord {
    int x;
    int y;
};

int canGet(struct Coord start, struct Coord finish) {
    int dx = abs(start.x - finish.x);
    int dy = abs(start.y - finish.y);
    
    return dx == dy;
}

int main() {
    struct Coord start;;
    struct Coord finish;
    scanf("%d %d", &start.x, &start.y);
    scanf("%d %d", &finish.x, &finish.y);
    if (canGet(start, finish)) {
        printf("слон может попасть на клетку (%d, %d) из клетки (%d, %d)\n",
            finish.x, finish.y, start.x, start.y);
    } else {
        printf("слон не может попасть на клетку (%d, %d) из клетки (%d, %d)\n",
            finish.x, finish.y, start.x, start.y);
    }
    
    return 0;
}
