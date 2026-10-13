/*pointer ops*/ 
#include<stdio.h>

int main() {
    int a = 0;
    int *p = &a;
    *p = 10;
    printf("pointer p=%p, x=%x\n",p,p);
    printf("address &a=%p, &*p=%p\n",&a,&*p);
    printf("value *p=%d,a=%d\n",*p,a);
    return 0;
} 
