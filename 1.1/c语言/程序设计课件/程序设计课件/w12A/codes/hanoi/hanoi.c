#include "hanoi.h"

void hanoi(int n,int a,int b,int c){
    if (n==1) {
        move(n,a,c);
        return;
    }
    hanoi(n-1, a, c, b);
    move(n,a,c);
    hanoi(n-1, b, a, c);
}
