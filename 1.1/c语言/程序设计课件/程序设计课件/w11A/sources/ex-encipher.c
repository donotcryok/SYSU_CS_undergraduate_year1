#include<stdio.h>

/**************************
 * encipher 编码字符。将字母变成其下一字母
 * （如’a’变成’b’……’z’变成’ａ’其它字符不变）
 * 
 * output: 编码后的字符
 * parameter:
 *    int ch 需要编码的字符
 *    int offset 偏移量 = 1
/* ************************/
int encipher(int, int);
 
int main() {
    char ch;
    // 读入一行电报输入
    scanf("%c",&ch);
    while (ch != '\n') {
        printf("%c",encipher(ch, 1));
        scanf("%c",&ch);
    } 
    printf("\n");
    return 0;
}


