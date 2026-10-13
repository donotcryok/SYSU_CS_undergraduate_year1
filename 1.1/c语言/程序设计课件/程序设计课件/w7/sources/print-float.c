#include<stdio.h>

typedef byte unsigned char;

int main() {
	float x = 0.15;
	void *p = &x;
	char *c = p; 
	printf("0x%02x%02x%02x%02x",(byte)*(c+3),(byte)*(c+2)
	,(byte)*(c+1),(byte)*(c));
	return 0;
}
