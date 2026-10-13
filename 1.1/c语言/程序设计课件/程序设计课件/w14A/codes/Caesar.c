#include<stdio.h>
#include<string.h> 
#include<assert.h> 

const char* AlphaBeta();
void AlphaShift(char str[],int k);
void AlphaShift1(char str[],int k);
void Transform(char from[], char to[], char in_out[]);

void Caesar(char str[],int k,char out[]);

int main() {
    assert(!strncmp(AlphaBeta(),"ABC",3));
    
    char alpha[27], beta[27];
    strcpy(alpha,AlphaBeta());
    strcpy(beta,AlphaBeta());
    int k = 8;
    AlphaShift(beta,k);
    //printf("%s\n",beta);
    assert(!strncmp(beta,"STU",3));
    
    strcpy(beta,AlphaBeta());
    AlphaShift1(beta,k);
    //printf("%s\n",beta);
    //printf("%d\n",(-2)%26);
    assert(!strncmp(beta,"STU",3));
    
    char s[] = "STUDENT";
    Transform(beta,alpha,s);
    //printf("%s\n",s);
    assert(!strcmp(s,"ABCLMVB"));
    Transform(alpha,beta,s);
    assert(!strcmp(s,"STUDENT"));
    
    char in[100] = "STUDENT. I like Computer!" ;
    char out[100];
    Caesar(in,k,out);
    printf("%s\n",out);
//    Caesar(out,-k,in);
//    printf("%s\n",in);
    return 0;
} 

void Caesar(char str[],int k,char out[]) {
    int n = strlen(str);
    for (int i=0; i<n;i++) {
        if (str[i]>='a' && str[i]<='z' ) {
            out[i]=(str[i]-'a'+ k + 26) % 26 + 'a';
        }
        else if (str[i]>='A' && str[i]<='Z') {           
            out[i]=(str[i]-'A'+ k + 26) % 26 + 'A';           
        }
        else {
            out[i] = str[i];
        }
    }
    out[n]=0; 
} 

void Transform(char from[], char to[], char in_out[]) {
    char *p = in_out;
    for (;*p;p++) {
        //printf("%c",*p);
        if (*p>='a' && *p<='z') {
            *p = *p -'a' + 'A';
            char *q = strchr(from,*p);
            *p = *(to + (q - from)); 
            *p = *p -'A' + 'a';
        } 
        else if (*p>='A' && *p<='Z') {
            char *q = strchr(from,*p);
            *p = *(to + (q - from));
        }
        //printf("%c\n",*p); 
    }
}

void AlphaShift(char str[],int k) {
    int n = strlen(str);
    char tmp[k+1];
    strncpy(tmp,str+n-k,k);
    for (int i=0;i<n-k;i++) 
        str[n-1-i] = str[n-1-k-i];
    for (int i=0;i<k;i++)
        str[i] = tmp[i];     
} 

void AlphaShift1(char str[],int k) {
    int n = strlen(str);
    for (int i=0;i<n;i++)
        str[i] = ((str[i] - 'A') - k + n) % n + 'A'; 
        // 为什么 - k 后要多加 n？ 
}

const char* AlphaBeta() {
    static char s[27] = "";
    if (s[0]) {
        return s;
    }
    else {
        for (int i=0;i<26;i++)
            s[i]='A'+i;
        s[26]=0; 
    }
    return s;
} 

