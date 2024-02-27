#include <stdio.h>
#include <stdlib.h>

typedef struct _triangle {
    float base, altitude, area;
} Triangle;

int input_n();
void input_triangles(int n, Triangle *triangles);
void find_smallest_area_triangle(int n, Triangle *triangles, Triangle *smallest_triangle);
void output(Triangle smallest_triangle);

int main() {
    int n;
    Triangle *triangles, smallest_triangle;
    
    n = input_n();
    triangles = (Triangle *)malloc(n * sizeof(Triangle));
    input_triangles(n, triangles);
    
    find_smallest_area_triangle(n, triangles, &smallest_triangle);
    
    output(smallest_triangle);
    
    free(triangles);
    
    return 0;
}

int input_n() {
    int n;
    printf("Enter the number of triangles: ");
    scanf("%d", &n);
    return n;
}

void input_triangles(int n, Triangle *triangles) {
    for (int i = 0; i < n; ++i) {
        printf("Enter the base of triangle %d: ", i + 1);
        scanf("%f", &triangles[i].base);
        printf("Enter the altitude of triangle %d: ", i + 1);
        scanf("%f", &triangles[i].altitude);
        triangles[i].area = 0.5 * triangles[i].base * triangles[i].altitude;
    }
}

void find_smallest_area_triangle(int n, Triangle *triangles, Triangle *smallest_triangle) {
    *smallest_triangle = triangles[0]; // Assume the first triangle has the smallest area initially
    
    for (int i = 1; i < n; ++i) {
        if (triangles[i].area < smallest_triangle->area) {
            *smallest_triangle = triangles[i];
        }
    }
}

void output(Triangle smallest_triangle) {
    printf("Triangle with smallest area:\n");
    printf("Base: %.2f\n", smallest_triangle.base);
    printf("Altitude: %.2f\n", smallest_triangle.altitude);
    printf("Area: %.2f\n", smallest_triangle.area);
}
