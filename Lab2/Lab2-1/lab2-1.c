#include<stdio.h>
#include<string.h>


void reverse(char str1[], char str2[]) {
    int len = strlen(str1); // Get the length of the input string
    int j = 0; // Index for str2

    // Loop from the last character of str1 down to the first
    for (int i = len - 1; i >= 0; i--) {
        str2[j] = str1[i]; // Copy character
        j++; // Move to next slot in str2
    }

// Close the string with a null terminator
    str2[j] = '\0';
}


int main(){
    char text[50]="Hello World";
    char out[50];
    reverse(text, out);
    printf("%s\n", out); 
    
    return 0;
}