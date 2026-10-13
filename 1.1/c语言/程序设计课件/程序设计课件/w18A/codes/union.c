#include<stdio.h>
union number{
	int x;
	double y;
};
int main(){
	union number value;
	value.x=100;
	printf("value.int:%d, value.double:%lf\n",value.x,value.y);
	value.y=100;
	printf("value.int:%d, value.double:%lf\n",value.x,value.y);
	printf("sizeof value:%d\n",sizeof(value));
}
