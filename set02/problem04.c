#include <stdio.h>

int input_array_size();
void input_array(int n, int a[n]);
int sum_composite_numbers(int n, int a[n]);
void output(int sum);

int main() {
    int size, sum;
    
    size = input_array_size();
    int arr[size];
    input_array(size, arr);
    sum = sum_composite_numbers(size, arr);
    output(sum);
    
    return 0;
}

int input_array_size() {
    int n;
    printf("Enter the size of the array: ");
    scanf("%d", &n);
    return n;
}

void input_array(int n, int a[n]) {
    printf("Enter the elements of the array: ");
    for (int i = 0; i < n; i++) {
        scanf("%d", &a[i]);
    }
}

int is_composite(int num) {
    if (num <= 1)
        return 0; 
    for (int i = 2; i <= num / 2; i++) {
        if (num % i == 0)
            return 1; 
    }
    return 0; 
}

int sum_composite_numbers(int n, int a[n]) {
    int sum = 0;
    for (int i = 0; i < n; i++) {
        if (is_composite(a[i])) {
            sum += a[i];
        }
    }
    return sum;
}

void output(int sum) {
    printf("Sum of composite numbers in the array: %d\n", sum);
}
