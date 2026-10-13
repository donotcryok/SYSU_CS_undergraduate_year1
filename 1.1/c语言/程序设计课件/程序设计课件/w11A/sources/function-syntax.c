#include <stdio.h>

int Square( int );     // function declarations
int Cube( int );

int main() {
    printf( "The square of 3 is %d\n", Square(3));
    printf( "The cube of 3 is %d \n", Cube(3));  
    return 0;
}

// function implementations
int Square(int n) { 
    return n*n;
} 

int Square(int n) {
    return n*n*n;
}
