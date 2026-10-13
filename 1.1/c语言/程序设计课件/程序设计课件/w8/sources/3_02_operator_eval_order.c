/*operator eval order*/ 
#include <stdio.h> 

int main() { 
    
	int a=4,b=2,c=3;

	printf("%d\n",a=b=c);
	printf("%d\n", a=b==c);
	printf("%d\n",a==(b=c));
	printf("%d\n", a==(b==c));
 
	return 0;
}

