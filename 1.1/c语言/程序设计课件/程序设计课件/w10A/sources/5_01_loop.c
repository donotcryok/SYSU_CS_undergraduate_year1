/*loop*/
#include<stdio.h>

int main() {
    int sum = 0;
    int i = 1;
    while (i < 100) {
        sum += i;
//        i++; 
    }
    printf("The sum is %d", sum);
} 
