#include <stdio.h>

struct student {
    char name[ 20 ];
    int age;
    char sex;
    float gpa;
};

void upgrade( struct student *child );

int main() {
    struct student aboy;
    aboy.sex = 'M';
    aboy.gpa = 3.00;
    
    // FIX 1: Use '&' to pass the address
    upgrade( &aboy ); 
    
    printf( "%.2f", aboy.gpa );
    return 0;
}

void upgrade( struct student *child ) {

    // Check for Male ('M' or 'm')
    if (child->sex == 'M' || child->sex == 'm') {
        child->gpa = child->gpa * 1.10; // Increase by 10%
    }
    // Check for Female ('F' or 'f')
    else if (child->sex == 'F' || child->sex == 'f') {
        child->gpa = child->gpa * 1.20; // Increase by 20%
    }

    if (child->gpa > 4.00) {
        child->gpa = 4.00;
    }
}