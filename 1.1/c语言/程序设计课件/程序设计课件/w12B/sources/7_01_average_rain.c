/*average rain*/
#include<stdio.h>

int main() {
    double data[100];
    int n=0;
    
    /*读入一个数组，以 -1 作为结束*/
    do {
        scanf("%lf,",&data[n]); 
        n++;
    } while (data[n-1]!=-1);
    n--; 
    
    /*输出数组*/ 
    for (int i=0; i<n; i++) {
        printf("%lf,",data[i]);
    }
    printf("\n");
    
    int raindays = 0;
    double rain_total = 0; 
    for (int i=0; i<n; i++) {
        if (data[i] > 1e-7) {
            raindays++;
            rain_total += data[i];
        }
    }
    
    if (raindays) 
        printf("Raindays %d, average rainfall %lf.\n",raindays,rain_total/raindays);
    else
        printf("No rain.\n");
}
