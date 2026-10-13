#include <stdio.h>
#include <ctype.h>
#include <string.h>

#define maxlen 200010

int isPalindrome(char *st)
{
    char removed[maxlen]={'\0'};
    int len_st=strlen(st), len=0;
    for (int i=0; i<len_st; ++i)
        if (isalnum(st[i])) removed[len++]=tolower(st[i]);
    for (int i=0; i<len/2; ++i)
        if (removed[i]!=removed[len-1-i]) return 0;
    return 1;
}
int main()
{
    char st[maxlen];
    scanf("%s", st);
    if (isPalindrome(st)) puts("true");
    else puts("false");
    return 0;
}