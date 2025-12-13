#include <stdio.h>
#include <string.h>

// Function
void explode(char str1[], char splitter, char str2[][10], int *count){
    int len = strlen(str1);
    int row = 0; // Current word index (str2 row)
    int col = 0; // Current character index (str2 column)

    for (int i = 0; i < len; i++) {
        // If we find the splitter char...
        if (str1[i] == splitter) {
            str2[row][col] = '\0'; // 1. Close the current word
            row++;                 // 2. Move to the next word
            col = 0;               // 3. Reset character position to 0
        } 
        else {
            // We have space for 10 chars, so index 0-9. Last one is for \0.
            // So we only copy if col < 9.
            if (col < 9) { 
                str2[row][col] = str1[i]; // Copy the character
                col++;
            }
        }
    }
    // After the loop finishes, we still have the very last word waiting to be closed
    str2[row][col] = '\0';
    // If row index is 2 (0, 1, 2), that means we have 3 words.
    *count = row + 1;
}

int main() {
    char out[20][10]; // Can hold 20 words, max 10 chars each
    int num = 0;      // Variable to store the number of words found

    // Call the function with CORRECT arguments
    // Note: Pass '&num' because the function expects a pointer (int *count)
    explode("I/Love/You", '/', out, &num);

    // Print the results
    printf("count = %d\n", num);
    for (int i = 0; i < num; i++) {
        printf("str2[%d] = \"%s\"\n", i, out[i]);
    }

    return 0;
}

