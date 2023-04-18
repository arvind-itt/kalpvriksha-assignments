#include <stdio.h>
#include <string.h>

int main() {
    char str[100];
    int vowels = 0;
    printf("Enter a string: ");
    scanf("%s", str);
    int length = strlen(str);
    for (int i = 0; i < length; i++) {
        if (str[i] == 'a' || str[i] == 'e' || str[i] == 'i' || str[i] == 'o' || str[i] == 'u' ||
            str[i] == 'A' || str[i] == 'E' || str[i] == 'I' || str[i] == 'O' || str[i] == 'U') {
            vowels++;
        }
    }
    printf("total vowels in the string: %d\n", vowels);
    return 0;
}
