#include <stdio.h>

/* Global array to ensure the pointer remains valid after return */
int data[100];

/* Function matching the required signature: returns int*, takes int* */
int *GetSet(int *a) {
    int i; /* Fix: Declare variable at the top */

    printf("How many number of element?\n");
    scanf("%d", a); /* 'a' is already a pointer to num */

    printf("Enter element:\n");
    for (i = 0; i < *a; i++) {
        scanf("%d", &data[i]);
    }
    
    return data; /* Return the pointer to the array */
}

int main() {
    int *data_ptr; /* Renamed to avoid confusion with global 'data' */
    int num;
    int i; /* Fix: Declare variable at the top */

    /* Pass address of num */
    data_ptr = GetSet(&num);

    /* Print result */
    for (i = 0; i < num; i++) {
        printf("%d ", data_ptr[i]);
    }
    
    printf("\n");
    return 0;
}