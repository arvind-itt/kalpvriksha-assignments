#include <stdio.h>
#include <string.h>
int main() {
    char str[100]
    char ch; 
    int index = -1;

    printf("Enter a string: ");
    fgets(str, sizeof(str), stdin);

    printf("Enter a character: ");
    scanf("%c", &ch);

    int length = strlen(str);

    for (int i = 0; i < length; i++) {
        if (str[i] == ch) {
            index = i;
            break;
        }
    }

    if (index == -1) {
        printf("Character not found\n");
    } else {
        printf("Index of the first occurrence of the character: %d\n", index);
    }
    return 0;
}
