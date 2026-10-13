#include<stdio.h>

int FileCopy(char *dest, char *scr);

int main() {
    return FileCopy("1¸´ÖÆ.txt","1.txt");
} 

int FileCopy(char *dest, char *scr) {
    char buf[1024*4];
    
    FILE *d = fopen(dest,"wb");
    if (!d) return -1;
    FILE *s = fopen(scr,"rb");
    if (!s) return -1;
    
    while (!feof(s)) {
        size_t cnt = fread(buf,1,sizeof(buf),s);
        fwrite(buf,1,cnt,d); 
    }
    
    fclose(s);
    fclose(d);
    return 0; 
}
