#include <stdio.h>
#include <stdlib.h>

int input_array_size();
void init_array(int n, int a[]);
void eratosthenes_sieve(int n, int a[]);
void output(int n, int a[]);

int main() {
    int n;

    n = input_array_size();

    int *array = (int *)malloc((n + 1) * sizeof(int));
    if (array == NULL) {
        printf("Memory allocation failed.\n");
        return 1;
    }
    init_array(n, array);

    eratosthenes_sieve(n, array);

    output(n, array);

    free(array);

    return 0;
}

int input_array_size() {
    int n;
    printf("Enter the value of n: ");
    scanf("%d", &n);
    return n;
}

void init_array(int n, int a[]) {
    for (int i = 2; i <= n; i++) {
        a[i] = i;
    }
}

void eratosthenes_sieve(int n, int a[]) {
    for (int i = 2; i * i <= n; i++) {
        if (a[i] != 0) {
            for (int j = i * i; j <= n; j += i) {
                a[j] = 0;
            }
        }
    }
}

void output(int n, int a[]) {
    printf("Prime numbers between 2 and %d are:\n", n);
    for (int i = 2; i <= n; i++) {
        if (a[i] != 0) {
            printf("%d ", a[i]);
        }
    }
    printf("\n");
}
