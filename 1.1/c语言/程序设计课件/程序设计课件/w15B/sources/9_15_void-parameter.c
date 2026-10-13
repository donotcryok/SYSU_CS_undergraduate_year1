/*void-parameter*/
#include<stdio.h>
#include<string.h>
#include<assert.h>

void* MemRepeat(void *dest,void *src,size_t src_sz,size_t count);
void Printx(void *p, size_t bytes_count);

int main() {
    int a[10], d=7;
    float b[10], e=3.14;
    
    MemRepeat(a,&d,sizeof(d),10);
    for (int i=0;i<10;i++)
        printf("%6d",a[i]);
    printf("\n");
    
    MemRepeat(b,&e,sizeof(e),10);
    for (int i=0;i<10;i++)
        printf("%6.2lf",b[i]);
    printf("\n");
    
    Printx(&d,sizeof(d));
    Printx(&e,sizeof(e));
} 

void* MemRepeat(void *dest,void *src,size_t src_sz,size_t count) {
    assert(dest && src);
    void *p=dest;
    for (int i=0;i<count;i++) {
        memcpy(p,src,src_sz);
        p += src_sz;
    }
    return dest; 
}

void Printx(void *p, size_t bytes_count) {
    assert(p);
    for (int i=0;i<bytes_count;i++,p++)
        printf("%4x", *(unsigned char*)p);
    printf("\n");
}


 
