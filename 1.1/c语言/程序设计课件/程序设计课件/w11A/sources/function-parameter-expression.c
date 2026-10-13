/*function parameter expression*/
#include <stdio.h>

void testfun(int a, int b, int c){
    printf("%d,%d,%d\n", a, b, c);
}

int main() {
    int a = 0;
    testfun(a++,a++,a++);
}
