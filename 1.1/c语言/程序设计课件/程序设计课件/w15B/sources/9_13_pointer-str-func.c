/*pointer-str-func*/
#include<stdio.h>
#include<assert.h>
#include <ctype.h>
#include <limits.h>

/*-----------
检查给定的字符是否空白符，即空格（ 0x20 ）、换行（ 0x0a ）、回车（ 0x0d ）、水平制表符（ 0x09 ）或垂直制表符（ 0x0b ）之一。

参数
    ch	-	要分类的字符
返回值
    若字符为空白符则为非零值，否则为零。
-----------*/
int isSpace(int ch);
/*-----------
src 所指向的空终止字节字符串的副本到 dest 所指向的空终止字节字符串的结尾。

参数
dest	-	指向要后附到的空终止字节字符串的指针
src	-	指向作为复制来源的空终止字节字符串的指针
destsz	-	要写入的最大字符数，典型地为目标缓冲区的大小
返回值
1) 返回 dest 的副本。
2) 成功时返回零。错误时返回非零。错误时，亦写入零到 dest[0] （除非 dest 为空指针，或 destsz 为零或大于 RSIZE_MAX ）。
-----------*/
char *StrCat( char *dest, const char *src );


int main(void)
{
    for (int ndx=0; ndx<=UCHAR_MAX; ndx++)
        if (isSpace(ndx)) printf("0x%02x\n", ndx);
        
    char str[50] = "Hello ";
    char str2[50] = "World!";
    StrCat(str, str2);
    StrCat(str, " ...");
    StrCat(str, " Goodbye World!");
    puts(str);
}

int isSpace(int ch) {
    const char *p = " \t\n\v\f\r";
    for (;*p;p++) {
        if (ch==*p) break;
    }
    return *p;
}

char *StrCat( char *dest, const char *src ) {
    assert(dest && src);  //src 或 dest 为空指针
    
    char *p = dest;
    for (;*p;p++); 
    assert(!(src>=dest && src<=p));  //这个约束什么意思？
    
    for (;*src;src++,p++)
        *p = *src; 
    *p = 0;
    
    return dest;
}
