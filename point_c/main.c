#include "point.h";
#include "point.c";
#include <stdio.h>

int main() {
    struct Point* point = makePoint(0.0, 0.0, "origin");

    setName(point, "newName");

    printf("Point Name=%s\n", getName(point));
}