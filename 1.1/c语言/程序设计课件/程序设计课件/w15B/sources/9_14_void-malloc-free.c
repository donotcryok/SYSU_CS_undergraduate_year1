/*void-malloc-free*/
#include<stdio.h>
#include<stdlib.h>

int main() {
    int m=3,n=4;
    int *q = malloc(m*n*sizeof(int));
    void *t = q;
    int (*p)[n] = t;
    for (int i=0;i<m*n;i++) 
        q[i] = i+1;
    for (int i=0;i<m;i++) {
        for (int j=0;j<n;j++)
            printf("%4d",p[i][j]);
        printf("\n");
    }  
    free(q);  
} 
