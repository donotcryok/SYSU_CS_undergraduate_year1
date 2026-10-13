#include<stdio.h>
#include<math.h>

int main() {
    double pi;
    
    pi = 0;
    int i = 1; 
    //请修改eps等，研究pi的计算精度 
    const double eps = 1e-6;
    while ( 1.0/i > eps) {
        pi += 1.0/i;
        i++;i++;
        pi -= 1.0/i;
        i++;i++;
    }
    pi *= 4;
    printf("%.5f\n",pi);
    
    pi = 0; 
    for (int i=1; i < 100000; i++) 
        pi += 1.0/(4*i-3)-1.0/(4*i-1);
    pi *= 4;
    printf("%.5f\n",pi); 
} 
