
/*gcd.c*/
#include<stdio.h>
//#define NDEBUG
#include<assert.h> 

/*
int gcd(int a,int b);

int main() {
    int a,b;
    
    assert(gcd(98,63)==7);
    assert(gcd(3,9)==3);
//    assert(gcd(8,12)==4);
    
//    scanf("%d%d",&a,&b);
//    printf("%d\n",gcd(a,b));    
    return 0;
}

int gcd(int a,int b) {
    int temp;
	while(b%a!=0){
		printf("%d %d\n",a,b);
		temp=b;
		b=a;
		a=temp%a;		
	}
    return a; 
}
*/

/*
#include <stdio.h>
int main()
{
    static double x;
    int x;
    printf("x is %d", x);
}
*/

/*
#include <stdio.h>

//制造函数工厂并使用之
#define FUNCTION(name, a) int fun_##name(int x) { return (a)*x;}

FUNCTION(quadruple, 4)
FUNCTION(double, 2)

#undef FUNCTION
#define FUNCTION 34
#define OUTPUT(a) puts( #a )

int main(void){
	printf("quadruple(13): %d\n", fun_quadruple(13) ) ;
	printf("double(21): %d\n", fun_double(21) );
	printf("%d\n", FUNCTION);
	OUTPUT(million); //注意缺少引号
}
*/

extern float weight;

int change_mood(int mood, int val){
	int new_mood = mood + val;
	
	if (new_mood > 0)
	    printf("Little Qin is happy! XD\n");
		else if (new_mood < 0)
		    printf("Little Qin is sad... : (\n");
		else
            printf("Little Qin wants to play with you~ :)\n");
    
	return new_mood;
}

void change_weight(float factor){
	weight *= factor;
	if (weight < 50.0)
	    printf("Cute!\n");
	else if (weight >= 50.0 && weight <= 200.0)
	    printf("so cute!\n");
	else if (weight > 200.0)
	printf("Extremely CUTE!\n");
}

int rua(int mood){
	int new_mood = change_mood(mood,1);
	return new_mood;
}

int feed(int mood){
	int new_mood = change_mood(mood,2);
	change_weight(2.0);
	return new_mood;
}

int do_nothing(int mood){
	int new_mood = change_mood(mood,-1);
	change_weight(0.75);
	return new_mood;
}
