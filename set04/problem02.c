#include <stdio.h>

typedef struct {
    int num, den;
} Fraction;

int compareFractions(Fraction f1, Fraction f2) {
    return f1.num * f2.den - f2.num * f1.den;
}

Fraction findSmallestFraction(Fraction fractions[], int size) {
    Fraction smallest = fractions[0];
    for (int i = 1; i < size; i++) {
        if (compareFractions(fractions[i], smallest) < 0) {
            smallest = fractions[i];
        }
    }
    return smallest;
}

int main() {
    Fraction fractions[3];
    printf("Enter three fractions (numerator denominator each separated by a space):\n");
    for (int i = 0; i < 3; i++) {
        scanf("%d %d", &fractions[i].num, &fractions[i].den);
    }

    Fraction smallest = findSmallestFraction(fractions, 3);
    printf("The smallest fraction is: %d/%d\n", smallest.num, smallest.den);

    return 0;
}
