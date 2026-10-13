#include<stdio.h>
#include<ctype.h>
#include<stdlib.h>
#include<string.h>

void printx(const char a[], size_t sz);

int main() {
    //put you test code here! example:
    char a[] = "aè\U0001F34C";  // �㽶 \U0001F34C èGBK \xc3a8 
    printx(a,sizeof a);
    
    char s[100]="hellooooooooooo";
    char s1[]={65,66,0};
    int i = 88;
 
//    scanf("%s", s+2);
    
    strcpy(s,s1);
    strcpy(s,"I love you!"+2);
    
    printf("%s,%d\n",s,strlen(s));
    printf("%s,%d\n",s1,strlen(s1));
    printf("%s,%d\n",a,strlen(a));
    
    return 0;
} 

void printx(const char a[], size_t sz) {
    for (int i=0;i<sz;i++) {
        printf("%02x,",(unsigned char)a[i]);
    }
    printf("\n");
}
