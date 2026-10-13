/*matrix add*/
#include<stdio.h>
#define  LEN_ARR(a) (sizeof(a) / sizeof(a[0]))

void vadd(int a[const], const int b[], const size_t sz);
void matrix_add(int a[][3], int b[][3], size_t sz);
void matrix_add1(int a[][3][3], int b[][3][3]);

int main(){
    int a[3][3] = {1,2,3,4,5,6,7,8,9};
    matrix_add(a,a,LEN_ARR(a));
    for (int i=0;i<LEN_ARR(a);i++) {
        for (int j=0;j<LEN_ARR(a[i]);j++)
            printf("%4d,",a[i][j]);
        printf("\n");
    }   
} 

void matrix_add(int a[][3], int b[][3], size_t sz){
    matrix_add1(a,b);
}

void matrix_add1(int a[][3][3], int b[][3][3]){
   vadd(a,b,LEN_ARR(a[0])*LEN_ARR(a[0][0])); 
}

void vadd(int a[const], const int b[], const size_t sz){
    //printf("%d\n",sz);
    for (int i=0;i<sz;i++)
        a[i] += b[i];       
}



