/*format testing*/
#include<stdio.h>

int main() {
    double radius = 5;
    
    printf("%lf\n",radius); /*default 8.6lf*/
    printf("%10lf\n",radius); 
    printf("%10.2lf\n",radius);
    printf("%-10.2lf\n",radius);
    printf("%+10.2lf\n",radius);
    printf("% 10.2lf\n",radius);
    printf("%010.2lf\n",radius);
    return 0;
}

