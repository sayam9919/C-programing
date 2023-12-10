#include <stdio.h>
#include <string.h>

int main() {
    // Declare and initialize strings
    char str1[] = "Hello";
    char str2[] = "World";
    char str3[20];  // Buffer for string operations

    // String concatenation
    strcpy(str3, str1);  // Copy str1 to str3
    strcat(str3, " ");   // Concatenate a space
    strcat(str3, str2);  // Concatenate str2

    // Display concatenated string
    printf("Concatenated String: %s\n", str3);

    // String comparison
    if (strcmp(str1, str2) == 0) {
        printf("%s is equal to %s\n", str1, str2);
    } else {
        printf("%s is not equal to %s\n", str1, str2);
    }

    // Finding the length of a string
    printf("Length of %s: %lu\n", str3, strlen(str3));

    // Copying strings
    char copiedStr[20];
    strcpy(copiedStr, str3);
    printf("Copied String: %s\n", copiedStr);

    // Reversing a string
    int i, j;
    char temp;
    for (i = 0, j = strlen(str3) - 1; i < j; i++, j--) {
        temp = str3[i];
        str3[i] = str3[j];
        str3[j] = temp;
    }

    // Display reversed string
    printf("Reversed String: %s\n", str3);

    return 0;
}