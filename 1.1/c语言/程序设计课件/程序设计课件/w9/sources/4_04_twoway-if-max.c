/*twoway if max*/
#include <stdio.h>
int main()
{
    int a, b, max;
    printf("输入两个整数：");
    scanf("%d%d", &a, &b);

    //请将双路选择改为单路选择 
    if(a>b) max=a;
    else max=b;

    printf("%d和%d的较大值是：%d\n", a, b, max);
    return 0;
}

