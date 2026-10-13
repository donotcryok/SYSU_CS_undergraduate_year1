/*compute area primary*/
#include<stdio.h>

int main() {
	/*define vars and constants*/ 
	double radius = 5; 
	double area;
	
	/*compute area*/
	area = radius * radius * 3.14;
	
	/*output results*/
	printf("the area for the circle of redius %lf is %lf\n", 
		radius, area);
}
