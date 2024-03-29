#include <stdio.h>
#include <string.h>

void input_string(char* a, char* b);
int sub_str_index(char* string, char* substring);
void output(char *string, char *substring, int index);

int main() {
    char string[100], substring[100];
    int index;

    
    input_string(string, substring);

    index = sub_str_index(string, substring);

    output(string, substring, index);

    return 0;
}

void input_string(char* a, char* b) {
    printf("Enter the string: ");
    scanf("%s", a);
    printf("Enter the substring: ");
    scanf("%s", b);
}

int sub_str_index(char* string, char* substring) {
    int string_length = strlen(string);
    int substring_length = strlen(substring);

    for (int i = 0; i <= string_length - substring_length; i++) {
        int j;
        for (j = 0; j < substring_length; j++) {
            if (string[i + j] != substring[j])
                break;
        }
        if (j == substring_length)
            return i;
    }
    return -1;
}

void output(char *string, char *substring, int index) {
    if (index != -1)
        printf("The substring '%s' is found in '%s' at index %d.\n", substring, string, index);
    else
        printf("The substring '%s' is not found in '%s'.\n", substring, string);
}
