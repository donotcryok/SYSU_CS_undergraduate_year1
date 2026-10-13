/*floating format*/
#include <stdio.h>

int main() {
	double x,y;
	x = -2.263;
	y = 13.367;
    double z = x + y;
    //details - https://zh.cppreference.com/w/c/io/fprintf
	printf("%-8.2f add %08.2f equal %.4e\n",x,y,z);
	return 0;
}
