#include <stdio.h>
#include <string.h>
#include <stdlib.h>

#define maxlen 10010

char *addBinary(char *a, char *b)
{
    int len_a=strlen(a), len_b=strlen(b), carry=0;
    int len_sum=len_a>len_b? len_a:len_b;
    char *sum=malloc(len_sum+2);
    for (int i=len_sum; i<len_sum+2; ++i) sum[i]='\0';
    for (int i=0; i<len_sum; ++i)
    {
        int s=carry+(i<len_a? a[len_a-1-i]-'0':0)+(i<len_b? b[len_b-1-i]-'0':0);
        carry=s>>1;
        s&=1;
        sum[i]='0'+s;
    }
    if (carry) sum[len_sum++]='1';
    for (int i=0; i<len_sum/2; ++i)
    {
        char ch=sum[i];
        sum[i]=sum[len_sum-1-i];
        sum[len_sum-1-i]=ch;
    }
    return sum;
}
int main()
{
    char *a=malloc(maxlen), *b=malloc(maxlen);
    scanf("%s", a);
    scanf("%s", b);
    char *sum=addBinary(a, b);
    puts(sum);
    free(sum);
    free(a);
    free(b);
    return 0;
}