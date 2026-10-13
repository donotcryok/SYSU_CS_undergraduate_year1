/*pointer array*/ 
#include<stdio.h>

void matrix_add(int **a, int **b, size_t m, size_t n);

int main() {
    int m[3][4] = {1,2,3,4,5,6,7,8,9,10,11,12};

    matrix_add(m,m,3,4);

    for (int i=0; i<3; i++) {
        for (int j=0; j<4; j++)
            printf("%-4d,",m[i][j]);
        printf("\n");
    }   
    return 0;
}

void matrix_add(int **a, int **b, size_t m, size_t n) {
    int (*p)[m][n] = a;  //VLA指针, 恢复数组结构 
    int (*q)[m][n] = b;
    for (int i=0; i<m; i++) 
        for (int j=0; j<n; j++)
            (*p)[i][j] += (*q)[i][j]; 
}
