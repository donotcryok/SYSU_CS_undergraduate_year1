/*pointer-arithmetic-ops */
#include<stdio.h>

int main() {
    int arr[] = {0,1,2,3,4,5};
    int *p = arr;
    int *q = &arr[sizeof(arr)/sizeof(int)];
    printf("q-p=%d\n",q-p);
    for (;p<q;p++) 
        printf("%d",*p);
    printf("\n"); 
    for (q=q-1;q>=arr;q--)
        printf("%d",*q);
    printf("\n");    
    return 0;
} 
