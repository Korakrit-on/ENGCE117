#include <stdio.h>

int main() {
    /* Variable Declaration */
    int n;
    int i;

    /* Get User Input */
    scanf("%d", &n);

    /* Loop logic */
    for (i = 1; i <= n; i++) 
    {
        printf("[%d] Hello world\n", i);
    }

    return 0;
}