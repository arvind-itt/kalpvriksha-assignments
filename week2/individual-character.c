#include <stdio.h>
#include <string.h>
int main() {
    char str[100];
    
    printf("Enter a string: ");
    fgets(str, sizeof(str), stdin);

    int length = strlen(str);

    printf("Individual characters from the string: \n");

    for (int i = 0; i < length; i++) {
        printf("%c ", str[i]);
    }
    return 0;
}
