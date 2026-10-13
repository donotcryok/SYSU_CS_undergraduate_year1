#include<stdio.h> 

int FacterialLoop(int);
int FacterialRecursive(int);

int main() {
    int n = 5;
    printf("loop out %d\n",FacterialLoop(n));
    printf("recursive out %d\n",FacterialRecursive(n));
}
