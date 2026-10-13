/*pointer NULL*/ 
#include<stdio.h>

int main() {
    int a = 10;
    int *p = NULL;
//  下面语句将导致程序中止 
//    *p = 10;
    if (p) {
        printf("*p=%d\n",*p);
    } 
    else {
        printf("NULL pointer!");
    }
    return 0;
} 
