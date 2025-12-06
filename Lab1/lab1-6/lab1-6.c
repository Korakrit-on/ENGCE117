#include <stdio.h>

//Array
int matrix[1000];

/* * Function Definition: 
 * Returns 'int' (status) instead of void.
 * Uses 'int **value' to handle the address of the 'data' pointer.
 */
int GetMatrix(int **value, int *row, int *col) {
    //Variables declared at the top
    int i;
    int j;

    printf("How many row, col ? ");
    scanf("%d %d", row, col);

//Point the main 'data' variable to our global array 
    *value = matrix;

    //Nested Loop to get elements
    for (i = 0; i < *row; i++) {
        for (j = 0; j < *col; j++) {
            // Prompt: a[0][0]
            printf("a[%d][%d] = ", i, j);
            
            // Calculate
            scanf("%d", &matrix[i * (*col) + j]);
        }
    }
    
    
    return 1;//"Success"
}

int main() {
    int *data, m, n;
    int i, j; 

    /* The main function ignores the return value, so 'int' works fine here */
    GetMatrix(&data, &m, &n);

    printf("\nMatrix:\n");
    for (i = 0; i < m; i++) {
        for (j = 0; j < n; j++) {
            printf("%d ", data[i * n + j]);
        }
        printf("\n");
    }

    return 0;
}