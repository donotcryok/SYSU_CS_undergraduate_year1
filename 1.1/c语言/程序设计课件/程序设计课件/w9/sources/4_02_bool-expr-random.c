/*boolean expr and random*/
#include<stdio.h>
#include<stdbool.h>
#include<stdlib.h>
#include<time.h> 

int main() {
    //give a random between 0..n-1
    srand((unsigned)time(NULL)); //seed
    const int n = 10; 
    int i = rand() % n;
	
    //print bool expr i in (2,8]; 
    printf("%d,%u\n", i ,i>2 && i<=8);
    //print bool expr i not in (2,8]; 
    printf("%d,%u\n", i ,i<=2 || i>8);
    printf("%d,%u\n", i ,!(i>2 && i<=8));
}
