#include <stdio.h>
#include <string.h>
#include <math.h>
int main() {
    char string[256];
    char reversedString[256];
    printf("Enter string: ");
    gets(string);

    size_t length = strlen(string);

    for (size_t i = 0; i < length; i++) {
        reversedString[length - i - 1] = string[i];
    }

    printf("Result: ");
    for (size_t i = 0; i < length; i++) {
        printf("%c", reversedString[i]);
    }

    return 0;
}