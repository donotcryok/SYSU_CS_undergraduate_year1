#include<stdio.h>
#include<stdlib.h>

int** generateMatrix(int n, int* returnSize, int** returnColumnSizes);

int main() {
    int n = 3;
    
    int size, *colSizes;
    int** p = generateMatrix(n, &size, &colSizes);
    
    for(int i=0;i<size;i++){
        for(int j=0;j<colSizes[i];j++) 
            printf("%d ",p[i][j]);
        printf("\n");
    }
    
    for(int i=0;i<size;i++) free(p[i]);
    free(p);
    free(colSizes); 
}

int** generateMatrix(int n, int* returnSize, int** returnColumnSizes){
   *returnSize = n;
   *returnColumnSizes = malloc(n);
   for (int i=0;i<n;i++) (*returnColumnSizes)[i]=n;
   
   int** out = malloc(n); 
   for(int i=0;i<n;i++) out[i]=malloc((*returnColumnSizes)[i]);
   for(int i=0;i<n;i++) {
       for(int j=0;j<n;j++)
          out[i][j]=i+j; //do something here
   }
   return out;
}
