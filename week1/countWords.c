#include <stdio.h>
#include <string.h>

int countWords(char* str);

int main() {
    char str[100];
    printf("Enter a string: ");
    gets(str); 

    int count = countWords(str);
    printf("Number of words in the string: %d\n", count);

    return 0;
}

int countWords(char* str) {
    int count = 0, i;
    int len = strlen(str);
    for (i = 0; i < len; i++) {
        if (str[i] == ' ' || str[i] == '\t' || str[i] == '\n') {
            count++;
        }
    }

    count++;

    return count;
}
