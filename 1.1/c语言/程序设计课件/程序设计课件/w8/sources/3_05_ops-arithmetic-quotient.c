/*ops arithmetic quotient*/ 
#include <stdio.h>
 
int main() { 
    int a = 0123456; 
    int i = 3;
	
    printf("input a octal:");
    scanf("%o",&a); 
    
    /*calculate the i'th number*/
    int q = a >> (3 * (i-1)); //a / 8^(i-1)
    int r = q % 8; 

    printf("The %i'th number of the octal %o is %d.",i,a,r);
}

