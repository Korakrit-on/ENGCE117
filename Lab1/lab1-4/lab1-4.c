#include <stdio.h>

/* Global array: Must be outside functions so the pointer remains valid */
int data[100];


int *GetSet(int *a) {
    // 1. Declare loop variable at the top
    int i; 

    /* 2. Get the number of elements */
    printf("How many number of element?\n");
    scanf("%d", a);

    /* 3. Get the inputs */
    printf("Enter element:\n");
    for (i = 0; i < *a; i++) {
        scanf("%d", &data[i]);
    }
    
    /* 4. Return the pointer to the global array data */
    return data;
}

int main() {
    int *data;
    int num;
    int i; 

    /* Call the function */
    data = GetSet(&num);

    /* Print the output to satisfy the test case */
    for (i = 0; i < num; i++) {
        printf("%d ", data[i]);
    }
    
    return 0;
}