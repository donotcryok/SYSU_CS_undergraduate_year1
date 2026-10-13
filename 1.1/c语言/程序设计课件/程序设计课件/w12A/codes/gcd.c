/*gcd.c*/
#include<stdio.h>
//#define NDEBUG
#include<assert.h> 

int min(int a,int b);
int gcd(int a,int b);

int main() {
    int a,b;
    
    assert(gcd(3,5)==1);
    assert(gcd(3,9)==3);
    assert(gcd(8,12)==4);
    
//    scanf("%d%d",&a,&b);
//    printf("%d\n",gcd(a,b));    
    return 0;
}

inline int min(int a,int b){
    return (a > b)? b:a;
}

int gcd(int a,int b) {
    int n = min(a,b);
    int i; 
    for(i=n; i>0; i--){
        if (!(a % i) && !(b % i)) 
           break;
    }
    return i; 
}


