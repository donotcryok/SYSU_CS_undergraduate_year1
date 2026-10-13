/*oneway if - compute area*/
#include<stdio.h>

int main() {
	/*define vars and constants*/ 
	double radius, area;
	const double PI = 3.14;
	
	/*input radius*/
	printf("input radius:");
	scanf("%lf",&radius);
	
	/*compute area*/
	area = 0;
	if (radius > 0)
	   area = radius * radius * PI;
	
	/*output results*/
	printf("the area for the circle of redius %lf is %lf", 
		radius, area);
}
