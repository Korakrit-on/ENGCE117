#include <stdio.h>

int main() {
    int n;
    int i;  /* Fix 1: Declare 'i' here. Essential for older grading systems */

    scanf("%d", &n);

    for (i = 1; i <= n; i++) {
        /* Fix 2: Matches the Test Case image exactly */
        printf("[%d] Hello world\n", i);
    }

    return 0;
}
