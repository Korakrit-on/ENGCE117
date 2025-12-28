#include <stdio.h>

struct student {
    char name[ 20 ];
    int age;
    char sex;
    float gpa;
};

// Prototype
struct student (*GetStudent( int *room ))[ 10 ] {
    // 1. Static Array (Keeps memory alive after function ends)
    static struct student class_data[ 20 ][ 10 ];

    // 2. Ask for rooms
    printf("Enter number of rooms (Max 20): ");
    scanf("%d", room);

    // Safety Caps
    if (*room > 20) {
        printf("Warning: Too many rooms! Capping at 20.\n");
        *room = 20;
    }
    if (*room < 1) {
        *room = 1;
    }

    // 3. Loop for input
    for (int i = 0; i < *room; i++) {
        printf("\n=== ROOM %d ===\n", i + 1);
        
        for (int j = 0; j < 10; j++) {
            printf("Student %d/%d [Name Age Sex GPA]: ", j + 1, 10);
            
            // Read Name
            scanf("%s", class_data[i][j].name);
            
            // Read Age
            scanf("%d", &class_data[i][j].age);
            
            // Read Sex (Space before %c is crucial)
            scanf(" %c", &class_data[i][j].sex);
            
            // Read GPA
            scanf("%f", &class_data[i][j].gpa);
        }
    }

    // 4. Return the static array
    return class_data;
}

int main() {
    struct student ( *children )[ 10 ];
    int group;
    
    printf("--- PROGRAM START ---\n");
    
    // Call the function
    children = GetStudent( &group );
    
    printf("\n--- RESULTS ---\n");
    printf("Data entry complete for %d room(s).\n", group);
    // Example: Print the first student of the first room to prove it worked
    printf("First Student: %s (GPA: %.2f)\n", children[0][0].name, children[0][0].gpa);
    
    return 0;
}

