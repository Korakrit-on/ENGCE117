#include <stdio.h>

struct student {
    char name[ 20 ];
    int age;
    char sex;
    float gpa;
};

// Function Definition
void upgrade( struct student *child ) {
    // Check if the student is Male ('M')
    if (child->sex == 'M' || child->sex == 'm') {
        // Increase GPA by 10% (Multiply by 1.10)
        child->gpa = child->gpa * 1.10;
    }
    // Check if the student is Female ('F') - Assumption based on standard coding problems
    else if (child->sex == 'F' || child->sex == 'f') {
        // Increase GPA by 20% (Multiply by 1.20)
        child->gpa = child->gpa * 1.20;
    }
}
int main() {
    struct student aboy;
    aboy.sex = 'M';
    aboy.gpa = 3.00;
    
    
    // Because the function expects a pointer (*child), we must pass the address of aboy.
    upgrade( &aboy ); 
    
    printf( "%.2f", aboy.gpa );
    return 0;
}

