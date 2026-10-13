#include <stdio.h>
#include <string.h>

char Roman_table[13][10]={"CM", "CD", "XC", "XL", "IX", "IV", "M", "D", "C", "L", "X", "V", "I"};
int digit_table[13]={900, 400, 90, 40, 9, 4, 1000, 500, 100, 50, 10, 5, 1};

int roman2int_table(char *roman)
{
    int len=strlen(roman), num=0;
    for (int i=0; i<len; )
        for (int j=0; j<13; ++j)
            if (strncmp(roman+i, Roman_table[j], strlen(Roman_table[j]))==0)
            {
                num+=digit_table[j];
                i+=strlen(Roman_table[j]);
                break;
            }
    return num;
}

int roman2int_control(char *roman)
{
    int len=strlen(roman), num=0;
    for (int i=0; i<len; )
        if (roman[i]=='C' && roman[i+1]=='M') num+=900, i+=2;
        else if (roman[i]=='C' && roman[i+1]=='D') num+=400, i+=2;
        else if (roman[i]=='X' && roman[i+1]=='C') num+=90, i+=2;
        else if (roman[i]=='X' && roman[i+1]=='L') num+=40, i+=2;
        else if (roman[i]=='I' && roman[i+1]=='X') num+=9, i+=2;
        else if (roman[i]=='I' && roman[i+1]=='V') num+=4, i+=2;
        else if (roman[i]=='M') num+=1000, i++;
        else if (roman[i]=='D') num+=500, i++;
        else if (roman[i]=='C') num+=100, i++;
        else if (roman[i]=='L') num+=50, i++;
        else if (roman[i]=='X') num+=10, i++;
        else if (roman[i]=='V') num+=5, i++;
        else if (roman[i]=='I') num+=1, i++;
    return num;
}

int main()
{
    char roman[20];
    scanf("%s", roman);
    printf("%d\n", roman2int_control(roman));
    return 0;
}