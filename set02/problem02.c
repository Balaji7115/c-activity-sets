#include <stdio.h>

int input_side();
int check_scalene(int a, int b, int c);
void output(int a, int b, int c, int is_scalene);

int main() {
    int side1, side2, side3, is_scalene;
    
    side1 = input_side();
    side2 = input_side();
    side3 = input_side();
    
    is_scalene = check_scalene(side1, side2, side3);
    
    output(side1, side2, side3, is_scalene);
    
    return 0;
}

int input_side() {
    int side;
    printf("Enter the length of a side: ");
    scanf("%d", &side);
    return side;
}

int check_scalene(int a, int b, int c) {
    if (a != b && b != c && a != c)
        return 1; 
    else
        return 0; 
}

void output(int a, int b, int c, int is_scalene) {
    printf("Side 1: %d\n", a);
    printf("Side 2: %d\n", b);
    printf("Side 3: %d\n", c);
    
    if (is_scalene)
        printf("The triangle is scalene.\n");
    else
        printf("The triangle is not scalene.\n");
}
