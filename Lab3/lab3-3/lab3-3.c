#include <stdio.h>

struct student {
    char name[ 20 ];
    int age;
    char sex;
    float gpa;
};

// Function Definition
struct student upgrade( struct student child ) {
    // 1. Check for Male (Handle 'M' and lowercase 'm')
    if (child.sex == 'M' || child.sex == 'm') {
        child.gpa = child.gpa * 1.10; // Increase by 10%
    }
    // 2. Check for Female (Handle 'F' and lowercase 'f')
    else if (child.sex == 'F' || child.sex == 'f') {
        child.gpa = child.gpa * 1.20; // Increase by 20%
    }
    
    if (child.gpa > 4.00) {
        child.gpa = 4.00;
    }

    // 4. Return the struct
    return child;
}
int main() {
    struct student aboy;
    aboy.sex = 'M';
    aboy.gpa = 3.00;
    
    //we pass the struct directly and catch the result back
    aboy = upgrade( aboy ); 
    
    printf( "%.2f", aboy.gpa );
    return 0;
}


