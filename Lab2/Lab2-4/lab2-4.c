#include <stdio.h>
#include <string.h>


// Function Definition
void explode(char str1[], char splitter, char str2[][10], int *count) {
    int i = 0;
    int row = 0; // Current word index (str2 row)
    int col = 0; // Current character index (str2 column)
    *count = 0; // Reset count

    // Loop through the input string character by character
    while (str1[i] != '\0') {
        
        // Safety check: Stop if we exceed the maximum number of strings
        if (row >= 20) break;

        if (str1[i] == splitter) {
            // If we hit the splitter:
            str2[row][col] = '\0'; // 1. Null-terminate the current string
            row++;               // 2. Move to the next string (next row)
            col = 0;             // 3. Reset character index to 0
        } else {
            // If it's a normal character:
            // Safety check: prevent writing past the buffer length
            if (col < 10 - 1) { 
                str2[row][col] = str1[i]; // Copy the character
                col++;
            }
        }
        i++;
    }

    // Handle the very last string (since it doesn't end with a splitter)
    str2[row][col] = '\0';
    
    // Calculate total count (index j + 1 because j starts at 0)
    *count = row + 1;
}
int main() {
    // 1. Setup the variables as per the example
    char str1[] = "I/Love/You";
    char str2[20][10]; // 2D array to store the result strings
    char splitter = '/';
    int count = 0;

    // 2. Call the function
    explode(str1, splitter, str2, &count);

    // 3. Print the results to verify
    printf("Result:\n");
    for (int i = 0; i < count; i++) {
        printf("str2[%d] = \"%s\"\n", i, str2[i]);
    }
    printf("\ncount = %d\n", count);

    return 0;
}

