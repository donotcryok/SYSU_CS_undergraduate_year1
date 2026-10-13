#include<stdio.h>

struct BF10 {
    int a:4;
} bit_field1;

struct BF11 {
    int a:4, :2, b:5;
} bit_field2;

struct BF20 {
    int a:4, :2;
    int b:27;
} bit_field3;

struct BF21 {
    int a:4, :2, :0;
    int b:4;
} bit_field4;

union {
    int i;
    struct BF11 bf11;
} u1 = {.i=0x5a};

union {
    int i[2];
    struct BF21 bf21;
} u2 = {.i={0x5a,0x5a}};

int main() {
    printf("bit_field1 size %d, start = %p\n",
    sizeof(bit_field1),&bit_field1);
    
    printf("bit_field2 size %d, start = %p\n",
    sizeof(bit_field2),&bit_field2);
    
    printf("bit_field3 size %d, start = %p\n",
    sizeof(bit_field3),&bit_field3);
    
    printf("bit_field4 size %d, start = %p\n",
    sizeof(bit_field4),&bit_field4);
    
    printf("%x,%x\n",u1.bf11.a,u1.bf11.b);
    printf("%x,%x\n",u2.bf21.a,u2.bf21.b);
}
