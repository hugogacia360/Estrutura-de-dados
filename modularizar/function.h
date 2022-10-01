#define pi 3.14

typedef struct Circle
{
    float radius;
    float x, y;

} circle;

void show_circle(circle c);
float area_circle(circle c, float radius);
float perimeter(circle c);
float distance(circle c1, circle c2);