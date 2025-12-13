#include <stdio.h>
#include <string.h>

// Function definition
char* reverse(char str1[]) {
    
    int len = strlen(str1); // Calculate length
    int j = 0;
    char temp; // Temporary variable for swapping

    // swapping the front characters with the back characters simultaneously
    for (int i = 0; i < len / 2; i++) {
        temp = str1[i];                 // 1. Keep the front character safe
        str1[i] = str1[len - 1 - i];    // 2. Move back character to front
        str1[len - 1 - i] = temp;       // 3. Put the safe front character in the back
    }

    return str1; // Return the pointer to str1
}

int main() {
    char text[50] = "I Love You";
    char *out;
    
    // Function call
    out = reverse(text);
    
    printf("%s\n", out);
    
    return 0;
}