#include <stdio.h>
#include <math.h>

// Structure declarations
typedef struct point {
    float x, y;
} Point;

typedef struct polygon {
    int sides;
    Point p[100];
    float perimeter;
} Polygon;

// Function declarations
int input_n();
Point input_point(char *prompt_msg);
int input_polygon(Polygon *p);
float find_distance(Point a, Point b);
void find_perimeter(Polygon *p);
void output(Polygon p);

int main() {
    Polygon poly;

    // Input
    poly.sides = input_n();
    input_polygon(&poly);

    // Calculate perimeter
    find_perimeter(&poly);

    // Output
    output(poly);

    return 0;
}

// Function to input number of sides
int input_n() {
    int sides;
    printf("Enter the number of sides of the polygon: ");
    scanf("%d", &sides);
    return sides;
}

// Function to input a point
Point input_point(char *prompt_msg) {
    Point p;
    printf("%s (x y): ", prompt_msg);
    scanf("%f %f", &p.x, &p.y);
    return p;
}

// Function to input a polygon
int input_polygon(Polygon *p) {
    printf("Enter the coordinates for each point of the polygon:\n");
    for (int i = 0; i < p->sides; i++) {
        char prompt_msg[50];
        sprintf(prompt_msg, "Enter coordinates of point %d", i + 1);
        p->p[i] = input_point(prompt_msg);
    }
    return p->sides;
}

// Function to calculate distance between two points
float find_distance(Point a, Point b) {
    return sqrt(pow((b.x - a.x), 2) + pow((b.y - a.y), 2));
}

// Function to find perimeter of the polygon
void find_perimeter(Polygon *p) {
    float perimeter = 0;
    for (int i = 0; i < p->sides; i++) {
        int next = (i + 1) % p->sides;
        perimeter += find_distance(p->p[i], p->p[next]);
    }
    p->perimeter = perimeter;
}

// Function to output the result
void output(Polygon p) {
    printf("The perimeter of the polygon is %.6f\n", p.perimeter);
}
