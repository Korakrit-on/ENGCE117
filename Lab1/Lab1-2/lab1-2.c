#include <stdio.h>

/* Function Definition */
void GetSet(int a[], int *b) {
    //declare loop variable at the top for strict compilers
    int i; 

    printf("Enter number of elements: \n");
    scanf("%d", b);

    //Get the numbers
    // use *b to get the value stored at the pointer
    printf("Enter %d numbers: \n", *b);
    for (i = 0; i < *b; i++) {
        scanf("%d", &a[i]);
    }
}

int main() {
    
    int data[100];
    int num;
    int i;

    /* Call function: Pass 'data' array and address of 'num' */
    GetSet(data, &num);

    /* Print result to verify */
    for (i = 0; i < num; i++) {
        printf("%d ", data[i]);
    }
    
    printf("\n");
    return 0;
}