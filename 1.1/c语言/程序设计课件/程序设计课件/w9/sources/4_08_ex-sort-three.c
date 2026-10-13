/*ex-sort-three*/
#include<stdio.h>

int main() {
    
    int i,j,k;
    int max,min,median;

    printf("please three int number:");
    scanf("%d%d%d",&i,&j,&k);
    
    //请给出合适的表达式替换i，j 
    max = i; 
    min = j;
    median = i+j+k-max-min;
     
    printf("%d %d %d",max,median,min);
}
