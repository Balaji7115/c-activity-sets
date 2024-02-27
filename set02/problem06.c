#include <stdio.h>
#include <string.h>

void input_string(char *a);
void str_reverse(char *str, char *rev_str);
void output(char *a, char *reverse_a);

int main() {
    char str[100], rev_str[100];
    
    input_string(str);
    str_reverse(str, rev_str);
    output(str, rev_str);
    
    return 0;
}

void input_string(char *a) {
    printf("Enter a string: ");
    scanf("%s", a);
}

void str_reverse(char *str, char *rev_str) {
    int length = strlen(str);
    int i, j = 0;
    
    for (i = length - 1; i >= 0; i--) {
        rev_str[j++] = str[i];
    }
    rev_str[j] = '\0';
}

void output(char *a, char *reverse_a) {
    printf("Original string: %s\n", a);
    printf("Reversed string: %s\n", reverse_a);
}


