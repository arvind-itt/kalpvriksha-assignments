#include <stdio.h>

void countCharacter(char str[], char ch) {
    int count = 0;
    for (int i = 0; str[i] != '\0'; i++) {
        if (str[i] == ch) {
            count++;
        }
    }
    printf("The character '%c' occurs %d times in the string.\n", ch, count);
}

int main() {
    char input_str[100], ch;
    printf("Enter a string: ");
    scanf("%s", input_str);
    printf("Enter the character to count: ");
    scanf(" %c", &ch);
    countCharacter(input_str, ch);
    return 0;
}
