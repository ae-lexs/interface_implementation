struct Point;

struct Point* makePoint(double x ,double y, char* name);
void setName(struct Point* point, char* newName);
char* getName(struct Point* point);
