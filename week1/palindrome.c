#include<stdio.h>
int isPalindrome(char* str) {
    char* end_ptr = str;
    while (*end_ptr != '\0') {
        end_ptr++;
    }
    end_ptr--;
    for (char* start_ptr = str; start_ptr < end_ptr; start_ptr++, end_ptr--) {
        if (*start_ptr != *end_ptr) {
            return 0;
        }
    }
    return 1;
}

int main() {
    char input_str[100];
    printf("Enter a string: ");
    scanf("%s", input_str);
    if (isPalindrome(input_str)) {
        printf("The string is a palindrome.\n");
    }
    else {
        printf("The string is not a palindrome.\n");
    }
    return 0;
}
