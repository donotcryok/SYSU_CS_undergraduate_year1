#include <stdio.h>
#include "hanoi.h"

int main()
{
    int n;
    scanf("%d",&n);
    hanoi(n,'a','b','c');
    return 0;
}

void move(int n, int a, int b) {
    printf("move %d from %c to %c\n", n,a,b);
}