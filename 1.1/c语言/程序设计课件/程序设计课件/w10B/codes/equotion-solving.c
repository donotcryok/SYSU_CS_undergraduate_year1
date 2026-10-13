#include<stdio.h>

int main(){
    int a,b,c;
    double delta,x1,x2;
    
    /*test cases*/
    a=1,b=-2,c=1;
//    a=1,b=0,c=-4; 
    
    if (a) {
        delta = b*b - 4*a*c;
        if (delta > 0) {
            if (a) printf("x1,x2");
            else printf("x2,x1");
        }
        else if (delta==0) {
            printf("delta=0,x=-b/(2.0*a)");
        }
        else {
            printf("delta<0,None");
        }
    }
    else if (b) {
        printf("a=0,x=-c/b\n"); 
    }
    else {
        printf("a=b=0,None\n");
    }
    
}
