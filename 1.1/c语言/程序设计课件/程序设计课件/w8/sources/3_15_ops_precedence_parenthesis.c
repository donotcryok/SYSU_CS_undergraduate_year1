#include <stdio.h> 
int main() { 
    int a = 20; 
    int b = 10; 
    int c = 15; 
    int d = 5; 
    int e; 
    
    /*注意：以下采用 C++ 风格注释，请保证编译器ISO C99或以上*/ 
    e = (a + b) * c / d; // ( 30 * 15 ) / 5 
    printf("(a + b) * c / d 的值是 %d\n", e ); 
    e = ((a + b) * c) / d; // (30 * 15 ) / 5 
    printf("((a + b) * c) / d 的值是 %d\n" , e ); 
    e = (a + b) * (c / d); // (30) * (15/5) 
    printf("(a + b) * (c / d) 的值是 %d\n", e ); 
    e = a + (b * c) / d; // 20 + (150/5) 
    printf("a + (b * c) / d 的值是 %d\n" , e ); 
    
    return 0; 
}

