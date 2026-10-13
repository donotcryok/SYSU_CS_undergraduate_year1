#include <stdio.h>

int countCharacters(char ** words, int wordsSize, char * chars){
    short characters[26]={0};
    short i=0,j,length=0;
    while(chars[i]!=0){
        characters[chars[i]-97]++;
        i++;
    }
    short copied[26];
    for(i=0;i<wordsSize;i++){
        for(j=0;j<26;j++)
            copied[j]=characters[j];
        j=0;
        while(words[i][j]!=0){
            copied[words[i][j]-97]--;
            if(copied[words[i][j]-97]<0) break;
            j++;
        }
        if(words[i][j]!=0) continue;
        else length=length+j;
    }
    return length;
}