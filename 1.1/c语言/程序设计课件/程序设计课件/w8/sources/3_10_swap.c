#include <stdio.h> 

int main() { 
    double a,b,c;
    scanf("%lf,%lf",&a,&b);
		
    c=a;
	a=b;
	b=c;
	
    printf("a=%lf,b=%lf\n",a,b);
	  
    return 0;
}

