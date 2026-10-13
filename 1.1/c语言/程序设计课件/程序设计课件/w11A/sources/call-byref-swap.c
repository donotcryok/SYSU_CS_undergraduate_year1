/*call by ref swap*/
#include <stdio.h>

void Swap(int* x, int* y){
    int t = *x;
    *x = *y;
    *y = t;
}

void NoSwap(int x, int y){
    int t = x;
    x = y;
    y = t;
}

int main() {
    int a = 1, b = 3;
    Swap(&a,&b);
    printf("%d %d\n",a,b);
    NoSwap(a,b);
    printf("%d %d\n",a,b);
}
