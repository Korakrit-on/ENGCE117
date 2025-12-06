#include <stdio.h>

int matrix[1000];

/* * Function Definition 
 * We use 'int **value' because main passes '&data' (a pointer to a pointer)
 */
void GetMatrix(int **value, int *row, int *col) {
    /* Declare variables at the top (Strict C89 Rule) */
    int i, j;

    
    printf("How many row, col ? ");
    scanf("%d %d", row, col);

    //Point the main variable to our array
    *value = matrix;

    //3. Nested Loop to get elements
    /* We iterate through Rows (i) and Columns (j) */
    for (i = 0; i < *row; i++) {
        for (j = 0; j < *col; j++) {
            // Print prompt like "a[0][0] = " 
            printf("a[%d][%d] = ", i, j);
            
            /* Calculate 1D index: i * columns + j */
            scanf("%d", &matrix[i * (*col) + j]);
        }
    }
}

int main() {
    int *data, m, n;
    int i, j; /* Loop variables for printing */

    /* Call the function */
    GetMatrix(&data, &m, &n);

    /* Print result to verify in your video */
    printf("\nMatrix:\n");
    for (i = 0; i < m; i++) {
        for (j = 0; j < n; j++) {
            printf("%d ", data[i * n + j]);
        }
        printf("\n");
    }

    return 0;
}