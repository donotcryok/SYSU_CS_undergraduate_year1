#include<stdio.h>

#define READ 1
#define WRITE 2
#define EXE 4
#define ALL_PERMISSION 7

int main () {
    char file_permission = 0;
    file_permission = ALL_PERMISSION;
    file_permission &= ~READ & ~WRITE;
    file_permission |= EXE | WRITE;
    if (file_permission & READ) {
        printf("This file can be read.\n"); 
    }
    // 请给出表达式判断文件具有读写权限 
    if (true) {
        printf("This file can be read and write.\n");
    }
}
