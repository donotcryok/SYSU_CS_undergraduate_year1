#include<stdio.h>

#pragma pack(1)

typedef struct {
    char a[3];
    int b;
    short c;
} packed_struct;

#pragma pack(4)

typedef struct {
    char a[3];
    int b;
    short c;
} unpacked_struct;

//千万别忘了 
//设置当前对齐为默认值 
#pragma pack()
// 否则会导致程序性能大幅下降 

int main() {
    printf("sizeof packed_struct %d\n",sizeof(packed_struct));
    printf("sizeof unpacked_struct %d\n",sizeof(unpacked_struct));
}

 
