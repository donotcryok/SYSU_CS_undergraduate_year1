#include<stdio.h>

/*
//P18
//int add(int a); 
int main(void){
	int y = 5;
	int x = add(y);
	return 0;
}

int add(int a){
	a = 9;
	return 6;
} */

/*
//P19
int main(){
	int a = 1, b = 2;
	printf("%d %d\n",a,b);
	swap(&a, &b);
	printf("%d %d\n",a,b);
    return 0;
}

void swap(int *x, int *y){
    int t = *x;
	*x =*y;
	*y = t;
} */

/*
//P26
void m();
void n()
{
    m();
}

void main()
{
    void m()
    {
        printf("hi");
    }
}
*/

/*
int main(){
	int a;
	a = 1;
	{
		int b = 2;
		b = a;
	}
	a = b;   //error
	{
		int c = b; //error
	}
} */

/*
#include <stdio.h>
int main()
{
    int i;
    for (i = 0;i < 5; i++)
        int a = i;
    printf("%d", a);
}*/

/*
#include<stdio.h>
#include<math.h>
int main(){
	long long num=1234566,rest=0;
	if((num<-pow(2,31))||(num>(pow(2,31)-1))){
		printf("%d",rest);
		return 0;
	} 
	    
	while(num!=0){
		rest *=10;
		rest +=num%10;
	    num = num/10;
	}
	printf("%d",rest);

} 
*/
