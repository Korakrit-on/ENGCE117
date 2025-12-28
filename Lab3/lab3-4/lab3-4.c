#include <stdio.h>

struct student {
    char name[ 20 ];
    int age;
    char sex;
    float gpa;
};

// Function Prototype
void GetStudent( struct student child[20][ 10 ], int *room ) {
    
   // PROMPT ADDED
    printf("Enter number of rooms: "); 
    scanf("%d", room);

    if (*room > 20) *room = 20;
    if (*room < 1) *room = 1;

    for (int i = 0; i < *room; i++) {
        printf("\n--- Room %d ---\n", i + 1);
        for (int j = 0; j < 10; j++) {
            
            // PROMPT ADDED
            printf("Student %d (Name Age Sex GPA): ", j + 1);
            
            scanf("%s", child[i][j].name);
            scanf("%d", &child[i][j].age);
            scanf(" %c", &child[i][j].sex);
            scanf("%f", &child[i][j].gpa);
        }
    }
}

int main() {
    struct student children[ 20 ][ 10 ];
    int group;
    
    GetStudent( children, &group );
    
    // CONFIRMATION ADDED
    printf("\nData entry complete for %d room(s).\n", group);
    
    return 0;
}