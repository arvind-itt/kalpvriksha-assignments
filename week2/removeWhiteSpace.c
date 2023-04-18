#include <stdio.h>
#include <string.h>

int main() {
    char str[100], new_string[100];
    printf("Enter a string: ");
    fgets(str, sizeof(str), stdin);

    int length = strlen(str);
    int j=0;
    for (int i = 0; i < length; i++) {
        if (str[i] != ' ') {
            new_string[j++] = str[i];
        }
    }
    new_string[j] = '\0';

    printf("new String: %s\n", new_string);

    return 0;
}
