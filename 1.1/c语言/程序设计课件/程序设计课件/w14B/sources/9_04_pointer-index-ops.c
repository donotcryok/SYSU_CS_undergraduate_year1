/*pointer index ops*/ 
#include <stdio.h>
int main(void)
{
    int a[3] = {1,2,3};
    printf("%d %d\n", a[2], 2[a]); //数组名是指针表达式 
    a[2] = 7; // 下标表达式是左值
    int *p0 = a;
    printf("%d %d\n", p0[2], 2[p0]);
 
    int n[2][3] = {1,2,3,4,5,6};
    int (*p1)[3] = &n[1]; // n 的元素为数组
    printf("%d %d\n", p1[-1][2], (-1)[p1][2]); //p1指向的元素是数组 
 
    printf("%c %c\n", "abc"[2], 2["abc"]); //字符串字面量亦是数组
}
