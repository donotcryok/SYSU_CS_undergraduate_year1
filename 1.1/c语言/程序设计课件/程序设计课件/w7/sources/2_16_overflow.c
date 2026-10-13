/*overflow*/
#include <stdio.h>

int main() {
    char k = 127;  //0x7F;
    char m = k + 10;
    char n = k + k + 10;
    printf("%d, %d, %d\n",k+10, m, n);
    //printf("%x, %x, %x\n",k, k+10, k + k + 10);
}
