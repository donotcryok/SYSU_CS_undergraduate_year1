/*vars-address-value*/
#include<stdio.h>

int main() {
	int i = 5;
	float x = 5.0f;
	
	printf("Addr:%p bin value:%#010x\n",&i,i);
	printf("Addr:%p bin value:%#010x\n",&x,*(int *)&x);
	
	return 0;
}

