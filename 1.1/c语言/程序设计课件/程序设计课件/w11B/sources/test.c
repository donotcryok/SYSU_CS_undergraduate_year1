//test.c
#include<stdio.h>

/*
//1+2+3+…+n 的递归计算函数
int sum(int n){
	if (n != 0)	
    // sum() function calls itselfreturn n + sum(n-1)
    return n+sum(n-1);
    else
        return n;
} 

int main(){
	int number, result;
	printf("Enter a positive integer:");
	scanf("%d", &number);
	result = sum(number);
	printf("sum = %d", result);
	return 0;
}
*/

/*
int f(int n);

int main(){
	int n;
	scanf("%d",&n);
	printf("F(%d)为：%d",n,f(n));
	return 0;
}

int f(int n){
	int fabi;
	if(n==1) return 1;
	if(n==2) return 2;
	else return f(n-1)+f(n-2);
}
*/

/*
int main() {
    extern int ClassCount;
    printf("%d",ClassCount);
} 

int ClassCount = 12; //定义后置
*/

/*
int main() {
    static int ClassCount;
    printf("%d",ClassCount);
} 

int ClassCount = 12; //全局定义
*/



/*
//fibonacci sequence
int fab(int n);

int main(){
	int n;
	scanf("%d",&n);
	printf("F(%d)为：%d",n,fab(n));
	return 0;
}

int fab(int n){
	int fabi;
	if(n==0) return 0;
	else if(n==1) return 1;
	else return fab(n-1)+fab(n-2);
}
*/
