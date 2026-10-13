#include <stdio.h>
 
/*floating accuracy*/
int main() { 
    double x = 2.0e+307;
    x = x * 10;
    // 超出 double 范围的常量
    printf("+2.0e+308 --> %e\n",  x);

    float y = 123456789.0f;
    printf("123456789f --> %.8e\n",  y);
    y = y + 1;
    printf("123456790f --> %.8e\n",  y);
    y = y + 1;
    //此处省去100句 y = y + 1;
    y = y + 1;
    printf("1234568XXf --> %.8e\n",  y);
}
