/*boolean constant and type*/
#include<stdio.h>
#include<stdbool.h> 

int main() {
	bool x = 7; //Ïàµ±ÓÚ x=(_Bool)7 
	bool b = false; 
	printf("%x\n",x);
	printf("%u %u\n",sizeof(true),sizeof(b)); 
	printf("%u %u\n",sizeof(bool),sizeof(_Bool));
} 



