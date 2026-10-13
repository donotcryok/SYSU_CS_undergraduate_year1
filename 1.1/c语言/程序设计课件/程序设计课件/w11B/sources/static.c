/*static*/
#include<stdio.h>

int func(){
    static int count = 4;
    if (count) {
        printf("%d\n",count);
        return count--;
    } 
    else {
        printf("you are out!\n");
        return 0;
    }       
}

int main(){
    for (int i=0; i<10 ;i++) 
        if (!func()) break;
}
