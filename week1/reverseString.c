#include <stdio.h>

void reverseString(char str[]) {
    int length = 0;
    while (str[length] != '\0') {
        length++;
    }
    for (int i = 0; i < length / 2; i++) {
        char temp = str[i];
        str[i] = str[length - i - 1];
        str[length - i - 1] = temp;
    }
}

int main() {
    char input_str[100];
    printf("Enter a string: ");
    scanf("%s", input_str);
    reverseString(input_str);
    printf("Reversed string: %s\n", input_str);
    return 0;
}
