/*ops arithmetic int promotion*/ 
#include <stdio.h>
 
int main() {
    char i,j;
    /*«Î∑÷± ‰»Î 1£¨2£¨100£¨129*/
    scanf("%d",&i);
    j = 255 * i;
    printf("%d,%d,%0x\n",j,255 *i,
        255 *i);
}
