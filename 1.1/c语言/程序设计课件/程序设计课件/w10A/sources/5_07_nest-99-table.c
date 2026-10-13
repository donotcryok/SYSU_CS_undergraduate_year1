/*nest 99 table*/
#include <stdio.h>

int main(){
    int i, j;
    
    for(i=1; i<=9; i++){  //外层for循环
        for(j=1; j<=i; j++){  //内层for循环
            printf("%d*%d=%-2d  ", i, j, i*j);
        }
        printf("\n");
    }

    return 0;
}

