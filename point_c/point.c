#include "point.h"
#include <stdlib.h>

struct Point {
    double x, y;
    char* name;
};

struct Point* makePoint(double x ,double y, char* name) {
    struct Point* point = malloc(sizeof(struct Point));

    point->x = x;
    point->y = y;
    point->name = name;

    return point;
}

void setName(struct Point* point, char* newName) {
    point->name = newName;
}

char* getName(struct Point* point) {
    return point->name;
}
