/*byte maxmum*/
#include <stdio.h>
#define UINT_MAX -1

typedef unsigned char byte;
typedef unsigned short word;

int main() {
    byte b = UINT_MAX;
    word w = UINT_MAX;
	unsigned int i = UINT_MAX;
    unsigned long l = UINT_MAX;
	printf("Maxmum byte is %X , %u\n",b,b);
    printf("Maxmum word is %X , %u\n",w,w);
    printf("Maxmum int is %X , %u\n",i,i);
    printf("Maxmum long is %X , %u\n",l,l);
    short k = (word)UINT_MAX >> 1;
    printf("%d",k);
	return 0;
}
