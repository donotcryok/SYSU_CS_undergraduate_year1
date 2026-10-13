/*Facterial*/
#include<stdio.h>

int FacterialLoop(int);
int FacterialRecursive(int);

int main() {
    int n = 5;
    printf("loop out %d\n",FacterialLoop(n));
    printf("recursive out %d\n",FacterialRecursive(n));
}

int FacterialLoop(int n){
    int out = 1;
    for (int i=n; i>0; i--)
        out *= i;
    return out;
}

int FacterialRecursive(int n){
    int out = 1;
    if (n <= 1) 
       return 1;
    else
       return n * FacterialRecursive(n - 1);
}
