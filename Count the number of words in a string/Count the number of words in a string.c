#include <stdio.h>

int countWords(char *str) {
    int count = 0;
    int i = 0;
    // Loop until the end of the string
    while (str[i] != '\0') {
        // Increment count if a space is found
        if (str[i] == ' ') {
            count++;
        }
        // Move to the next character
        i++;
    }
    // Add one to count for the last word
    return count + 1;
}

int main() {
    char str[100];
    printf("Enter a string: ");
    scanf("%[^\n]", str);
    printf("Number of words in the string: %d\n", countWords(str));
    return 0;
}
